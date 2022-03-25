#include <iostream>
using namespace std;

int insertion(int *A, int n, int index, int value)
{

    for (int i = n; i >= index; i--)
    {
        A[i+1] = A[i];
    }

    A[index] = value;
}

int deletion(int *A,int n,int index){

  for (int i = index+1; i <n; i++)
  {
    A[i-1] =  A[i];
  }

}



int main()
{

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(A) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    insertion(A, n, 3, 45);

    for (int i = 0; i < n+1; i++)
    {
        cout << A[i] << " ";
    }

    deletion(A,n,3);


     for (int i = 0; i < n-1; i++)
    {
        cout << A[i] << " ";
    }


    return 0;
}