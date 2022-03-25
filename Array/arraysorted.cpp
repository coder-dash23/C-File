#include<iostream>
using namespace std;

void displayArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << A[i];
    }
}

 int IsSorted(int A[],int n){
     for (int i = 0; i < n; i++)
     {
         if (A[i+1]>A[i])
        return 1;
          
     }
     return 0;
   
 }

int main(){

    int A[] = {1,8,3,4,9,7};
    int n = 6;

    displayArray(A,n);

  int sort = IsSorted(A,n);

  cout<<endl;

   cout<<sort;


    return 0;
}
