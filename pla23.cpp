#include <iostream>
using namespace std;

bool isPresent(int A[3][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (A[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// To Print row wise Sum
void rowSum(int A[3][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = sum + A[row][col];
        }
        cout << sum << " ";
    }
}

// To Print col wise Sum

void colSum(int A[3][4], int row, int col)
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + A[row][col];
        }
        cout << sum << " ";
    }
}

int maxRowSum(int A[3][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = sum + A[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

int main()
{
    int A[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> A[i][j];
        }
    }

    isPresent(A, 12, 3, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }
    cout << "Sum of all the rows in a given 2-D array:" << endl;
    rowSum(A, 3, 4);
    cout << endl;
    cout << "Sum of all the columns in a given 2-D array:" << endl;
    colSum(A, 3, 4);

    cout << endl;

    int ansIndex = maxRowSum(A, 3, 4);

    cout << "Largest Row sum is present at index " << ansIndex << endl;

    return 0;
}