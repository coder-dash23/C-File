#include <iostream>
using namespace std;

//Sine Wave pattern in 2D-Array

void wavePrint(int A[3][3], int row, int col)
{

    for (int j = 0; j < col; j++)
    {
        if (j%2==0)
        {

              for (int i = 0; i < row; i++)
            {
                cout << A[i][j] << " ";
            }
        }

        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << A[i][j] << " ";
            }
        }
    }
}

int main()
{
    int A[3][3] = {3, 4, 1, 2, 12, 8, 7, 6, 7};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The sine wave pattern for the given 2-D array is: "<<endl;
     wavePrint(A,3,3);

    return 0;
}