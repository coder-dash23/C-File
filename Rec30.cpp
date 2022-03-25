#include <iostream>
using namespace std;
void printArray(int *A, int n)
{
    cout<<"Size of array is "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

bool Linearsearch(int *A, int n,int key)
{  
    printArray(A,n);


    if (n==0||n==1)
    {
        return false;
    }
    

   if (A[0] == key)
    {
        return true;
    }

    else
    {
        bool search = Linearsearch(A + 1, n - 1, key);
        return search;
    }
}

int main()
{
    int key;
    cin >> key;
    int A[] = {3, 5, 1, 2, 6};
    int n = sizeof(A) / sizeof(int);


    int ans = Linearsearch(A, n, key);

    if (ans)
    {
      cout<<"Present "<<endl;
    }

    else{
        cout<<"Absent "<<endl;
    }
    

    return 0;
}