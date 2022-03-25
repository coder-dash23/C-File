#include <iostream>
using namespace std;

int reverse(int *A, int i,int j)
{

    if (i > j)
    {
        return 0;
    }

    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
    i++,j--;

    int rev = reverse(A,i,j);
    return rev;

}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    reverse(A, 0,n-1);

    cout << endl;

     for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }


    return 0;
}