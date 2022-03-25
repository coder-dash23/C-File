#include <iostream>
using namespace std;
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout<<endl;
}
void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {23, 12, 14, 5, 4, 6, 89, 98};
    int n = sizeof(A) / sizeof(int);

    printArray(A, n);

    bubblesort(A, n);

    printArray(A, n);

    return 0;
}