#include <iostream>
using namespace std;

void display(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i]<<" ";
    }
}

int i=0;
int j=0;
int k=0;

void merge(int arr1[], int arr2[], int arr3[], int n, int m)
{

    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n)
    {
        arr3[k++] = arr1[i++];
    }
    while(j<m)
    {
        arr3[k++] = arr2[j++];
    }
    
}

int main()
{

    int A[] = {2, 3, 4, 5, 6};
    int B[] = {7, 8, 9, 10, 11};
    int n = sizeof(A) / sizeof(int);
    int m =  sizeof(B) / sizeof(int);
    int C[n+m];

    display(A,n);

    cout<<endl;
    display(B,m);
     cout<<endl;
    
    merge(A,B,C,n,m);


    cout<<"Array after merging "<<endl;
    display(C,n+m);
}