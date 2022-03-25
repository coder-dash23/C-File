#include <iostream>
using namespace std;

void displayArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << A[i];
    }
}

int indinsertion(int A[], int length, int index, int element, int size)
{
    if (length >= size)
    {
        return -1;
    }

    else
    {
        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = element;
        return 1;
    }
}

int main()
{

    int A[100] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    int index = 4;
    int element = 45;

    displayArray(A, length);
    cout << endl;

    indinsertion(A, length, index, element, 100);

    length++;

    displayArray(A, length);

    return 0;
}