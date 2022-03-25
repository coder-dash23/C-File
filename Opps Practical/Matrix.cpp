#include <iostream>
class Matrix1
{
private:
    int mat[2][2], add[2][2];

public:
    void getMatrix1()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void PrintMatrix1()
    {
        cout << "MATRIX 1: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
        }
    }
};

 class Matrix2{
private:
    int mat[2][2], add[2][2];
  public:
    void getMatrix2()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void PrintMatrix2()
    {
        cout << "MATRIX 1: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
        }
    }


 };

   void matrixsum(Matrix1 g, Matrix2 h){

      cout << "SUM OF MATRICES:" << endl;
        for (int i = 0; i < g.m; i++)
        {

            for (int j = 0; j < g.n; j++)
            cout << g.a[i][j] + h.b[i][j] << " ";
        }

   }


   
    // void operator+(matrix a)
    // {
    //     for (int i = 0; i < 2; i++)
    //     {
    //         for (int j = 0; j < 2; j++)
    //         {
    //             add[i][j] = mat[i][j] + a.mat[i][j];
    //             cout <
    //         }
    //         cout << "\n";
    //     }
    // }
};
void main(void)
{
    class matrix p, q;
    clrscr();
    cout << "\nEnter four elements of firt matrix\n";
    p.get();
    cout << "\nEnter four elements of second matrix\n";
    q.get();
    cout << "\nAddition of two matrices is as follows\n";
    p + q;
    getch();
}