#include<iostream>
using namespace std;

int main(){

   int A[] = {1,2,3,3,1,2,4,5,5};
   int n = sizeof(A)/sizeof(int);
   int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^A[i];
    }

    cout<<ans;
    

 return 0;
}