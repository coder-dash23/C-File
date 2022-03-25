#include <iostream>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

void InsertionSort(int *A, int n)
{
    int key;
    int j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;

        while (j>=0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }
}

int main()
{
    int A[] = {23, 12, 14, 5, 4, 6, 89, 98};
    int n = sizeof(A) / sizeof(int);

    printArray(A, n);

    InsertionSort(A, n);

    printArray(A, n);
    return 0;
}