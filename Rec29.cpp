#include <iostream>
#include <math.h>
using namespace std;

int sum(int *A, int n)
{
    if (n <= 0)
        return 0;

    else
    {
        int sumArray = A[0] + sum(A + 1, n - 1);
        return sumArray;
    }
}

int main()
{

    int arr[] = {1, 2, 4};
    int n = sizeof(arr) / sizeof(int);

    int ans = sum(arr, n);
    cout << ans;

    return 0;
}