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

void merge(int A[], int m, int B[], int n, int C[])
{
    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }

        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }

    while (i < m)
    {
        C[k] = A[i];
        k++;
        i++;
    }

    while (j < n)
    {
        C[k] = B[j];
        k++;
        j++;
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9,11,12,13};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);
    int arr3[m+n];

    merge(arr1, 5, arr2, 4, arr3);

    printArray(arr3, 9);
    return 0;
}