#include <iostream>
using namespace std;
class Matrix2;
class Matrix1
{
    int a[5][5];
    int m, n;

public:
    void getMatrix1()
    {
        cout << "MATRIX 1:" << endl;
        cout << "Rows and Columns: "<<endl;
        cin >> m >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
    }

    void PrintMatrix1()
    {
        cout << "MATRIX 1: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend void matrixsum(Matrix1, Matrix2);
};

class Matrix2
{
    int b[5][5];
    int m, n;

public:
    void getMatrix2()
    {
        cout << "MATRIX 2:" << endl;
        cout << "Rows and Columns: "<<endl;
        cin >> m >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> b[i][j];
    }

    void PrintMatrix2()
    {
        cout << "MATRIX 2: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend void matrixsum(Matrix1, Matrix2);
};

void matrixsum(Matrix1 g, Matrix2 h)
{
    if (g.m == h.m && g.n == h.n)
    {
        cout << "SUM OF MATRICES:" << endl;
        for (int i = 0; i < g.m; i++)
        {

            for (int j = 0; j < g.n; j++)
            {
                cout << g.a[i][j] + h.b[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
        cout << "Dimensions are not same...Addition not possible";
}

int main()
{
    Matrix1 m1;
    Matrix2 m2;
    m1.getMatrix1();
    m1.PrintMatrix1();
    m2.getMatrix2();
    m2.PrintMatrix2();
    matrixsum(m1, m2);
    return 0;
}