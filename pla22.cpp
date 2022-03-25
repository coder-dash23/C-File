#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

int add(int A[], int B[], int C[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[5] = A[i] + B[j];
        }
    }

    return C[5];
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 3, 4, 5, 6};
    int m = sizeof(A) / sizeof(int);
    int n = sizeof(B) / sizeof(int);
    int C[5];

    printArray(A, m);
    printArray(B, n);
    add(A, B, C, m, n);
    printArray(C, 5);

    return 0;
}