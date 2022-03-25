#include <iostream>
using namespace std;

void displayArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << A[i];
    }
}

int binarysearch(int A[], int length, int key)
{
    int low = 0;
    int high = length - 1;

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
    int A[] = {2, 3, 4, 5, 6, 7};
    int key;
    int length = sizeof(A) / sizeof(int);

    displayArray(A, 6);

    cout << endl;

    cout << "Enter the value of key" << endl;
    cin >> key;

    int searchindex = binarysearch(A, length, key);

    cout << "Element " << key << " is present at index " << searchindex;

    return 0;
}