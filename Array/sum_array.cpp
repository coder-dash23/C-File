#include <iostream>
using namespace std;

void displayArray(int A[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << " " << A[i];
    }
}

int main(){

     int A[] = {2, 3, 4, 5, 6, 7};
     int length = sizeof(A) / sizeof(int);

     displayArray(A, 6);

     int sum  = 0;

  cout<<endl;
     for (int i = 0; i < length; i++)
     {
         sum = sum +A[i];
     }

     cout<<"The sum of the given array is "<<sum<<endl;

     cout<<"The average value of the given array is "<<(float)sum/length;

}