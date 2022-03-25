#include <iostream>
using namespace std;

int MinArray(int A[], int length)
{
    int Min = A[0];

    for (int i = 1; i < length; i++)
    {
        if (A[i] < Min)
        {
            Min = A[i];
        }
    }

    return Min;
}

int main()
{
    int A[100] = {2, 3, 4, 5, 687, 1, 14};
    int length = 7;

    int min = MinArray(A, length);

    cout << "Minimum element in the given array is " << min;

    return 0;
}