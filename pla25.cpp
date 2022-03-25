#include <iostream>
using namespace std;

void SpiralPrint(int A[4][4], int row, int col)
{
    int count = 0;
    int total = row * col;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while (count < total)
    {
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            cout << A[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            cout << A[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            cout << A[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            cout << A[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}

int main()
{
    int A[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};
    int row = 4;
    int col = 4;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "This Spiral matrix Print in a given 2-D array is: " << endl;

    SpiralPrint(A, row, col);

    return 0;
}