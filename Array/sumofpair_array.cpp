#include<iostream>
using namespace std;

int main(){

   int A[] = {6,3,8,10,16,7,5,2,9,14,4};
   int n = sizeof(A)/sizeof(int);
   int k;

   cout<<"Enter the value of k "<<endl;
   cin>>k;
   for (int i = 0; i < n-1; i++)
   {
       for (int j = i+1; j < n; j++)
       {
           if (A[i]+A[j]==k)
           {
              cout<<A[i]<<" + "<<A[j]<<" = "<<k<<endl;
           }
           
       }
       
   }
   


    return 0;
}