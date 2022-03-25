#include<iostream>
using namespace std;

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void Insert(int *A, int position, int value, int n)
{
    for (int i = n; i >= position; i--)
    {
        A[position+1] = A[position];
    }

    A[position] = value;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(A) / sizeof(int);

    PrintArray(A, n);
    Insert(A, 3, 34,n);
    cout << endl;
    PrintArray(A, n + 1);
    return 0;
}