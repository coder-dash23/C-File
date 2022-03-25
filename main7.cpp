#include <iostream>
using namespace std;

void printarray(int *a, int n)
{
    for (int i = 0; i <n; i++)
    {
        cout << " " << a[i];
    }
}

void insertionsort(int *a, int n)
{
    cout << endl;

    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] >= key)

        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

int main()
{

    int a[] = {2, 3, 43, 13, 6, 45, 21, 87, 32};
    int n = 9;

    printarray(a, n);
    insertionsort(a, n);
    printarray(a, n);

    return 0;
}