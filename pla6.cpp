#include <iostream>
using namespace std;

void PrintArray(int A[], int n) l
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void swapAlternate(int A[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(A[i], A[i + 1]);
        }
    }
}

int main()
{

    int odd[5] = {1, 2, 3, 4, 5};
    int even[6] = {2, 4, 6, 8, 10, 12};

    swapAlternate(odd, 5);
    PrintArray(odd, 5);
    cout << endl;
    swapAlternate(even, 6);
    PrintArray(even, 6);

    return 0;
}