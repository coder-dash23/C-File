#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void reverse(int A[], int length)
{
    int start = 0;
    int end = length - 1;
    int temp;
    while (start < end)
    {
        temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main()
{

    int A[] = {2, 3, 4, 5, 6, 7};
    int length = 6;

    printArray(A, 6);

    reverse(A, 6);

    cout << "The reverse array is " << endl;

    printArray(A, 6);

    return 0;
}