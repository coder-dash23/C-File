#include<iostream>
#include<string>
using namespace std;

int main(){
  
  char A[] = "Adarsh";
  int i;
  char start = 0;
  char end = sizeof(A)/sizeof(char);
  int temp;

  cout<<end;

    while (start<end)
    {
        temp = A[start];
        A[start] = A[end];
        A[end]  = temp;
        start++;
        end--;
    }
   
    cout<<A;
    
    
return 0;
}
