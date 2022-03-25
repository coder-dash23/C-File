#include<iostream>
using namespace std;

int MaxArray(int A[],int length){
    int Max = A[0];

    for (int i = 1; i < length; i++)
    {
       if (A[i]>Max)
       {
           Max = A[i];
       }
    }

    return Max;

 
    
}

int main(){
    int A[100]  ={2,3,4,5,687,23,14};
    int length = 7;

  int max =  MaxArray(A,length);

  cout<<"Maximum element in the given array is "<<max;

}