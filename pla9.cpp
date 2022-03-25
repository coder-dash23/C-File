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

int Binarysearch(int A[], int n, int key)
{
    int high = n - 1;
    int low = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == A[mid])
        {
            return mid;
        }

        else if (key < A[mid])
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(int);
    int key;
    printArray(A, n);

    cout << "Enter teh value of key" << endl;
    cin >> key;

    int binary = Binarysearch(A, n, key);

    cout << endl;

    cout << "Element " << key << " is present at index " << binary;
    return 0;
}