#include <iostream>
using namespace std;

int MountainPeak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int main()
{

    int A[100] = {3, 4, 5, 1};
    int n = sizeof(A) / sizeof(int);

    int peak = MountainPeak(A, n);

    cout << peak;

    return 0;
}