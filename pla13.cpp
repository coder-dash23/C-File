#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

      cout<<endl;
}

void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[min])
            {

                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main()
{

    int arr[] = {1, 34, 23, 5, 56};
    int n = sizeof(arr) / sizeof(int);

    printarray(arr, n);

    selectionsort(arr, n);

    printarray(arr, n);

    return 0;
}
