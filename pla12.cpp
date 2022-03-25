// Book allocation problem
#include <iostream>
using namespace std;

int isPossible(int A[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + A[i] <= mid)
        {
            pageSum = pageSum + A[i];
        }

        else
        {
            studentCount++;
            if (studentCount > m || A[i] > mid)
            {
                return false;
            }
            pageSum = A[i];
        }
    }
    return true;
}

int Allocatiion(int A[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    int e = sum;
    int ans = -1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (isPossible(A, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = (s + e) / 2;
    }

    return ans;
}

int main()
{
    int A[] = {5, 5, 5, 5};
    int n = sizeof(A) / sizeof(int);

    cout << Allocatiion(A, n, 2);

    return 0;
}