#include <iostream>
using namespace std;
int binarySearch(int A[3][3], int key, int row, int col)
{
    int low = 0;
    int high = row * col - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int element = A[mid / col][mid % col];
        if (key == element)
        {
            return 1;
        }

        else if (key < element)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return 0;
}

int main()
{
    int A[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << binarySearch(A, 10, 3, 3);

    return 0;
}