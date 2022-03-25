#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void DisplayArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int max(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    return max;
}

int min(int A[], int n)
{
    int min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int linearsearch(int A[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << key << " is present at index " << i << endl;
        }
    }

  
}

int PrintNumber(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 10)
        {
            cout << A[i] << ",";
        }
    }
}

int main()
{
    int A[20];
    int length = 20;
    int key;

    printArray(A, length);

    DisplayArray(A, length);

    cout << endl;

    int largest = max(A, length);

    cout << "The largest elemnt in the given array is " << largest << endl;

    int smallest = min(A, length);

    cout << "The smallest elemnt in the given array is " << smallest << endl;

    cout << endl;

    cout << "Enter the value of key" << endl;
    cin >> key;

    linearsearch(A, length, key);

    cout << endl;

    cout << "The number present in an array which is greater then and equal to 10 are " << endl;

   int print =  PrintNumber(A, length);

   cout<<print;

    return 0;
}