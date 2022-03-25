#include <iostream>
using namespace std;

void rotated(int nums, int k)
{
    int temp[n];

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(A) / sizeof(int);

    rotated(12, 2);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}