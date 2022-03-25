#include <iostream>
using namespace std;
void Readarray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void Printarray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void reverseArray(int A[], int n)
{
    int temp;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int A[100];
    Readarray(A, 5);
    Printarray(A, 5);
    cout << endl;
    reverseArray(A, 5);
    cout<<"The reverse of an arry is "<<endl;
    Printarray(A, 5);

    return 0;
}