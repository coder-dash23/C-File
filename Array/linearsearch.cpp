#include<iostream>
using namespace std;

void displayArray(int A[], int n){
   for (int i = 0; i < n; i++)
   {
      cout<<" "<<A[i];
   }
   
}
int linearsearch(int A[], int n ,int key){

    for (int i = 0; i < n; i++)
    {
      if (A[i]==key)
      {
        cout<<key<<" is present at index "<<i<<endl;   
      }
    
    }
  
}

int main(){

int A[100] = {2,3,5,5,6,7,8};
int length = 7;
int key;

 displayArray(A,7);

 cout<<endl;

 cout<<"Enter the value of key"<<endl;
 cin>>key;

 linearsearch(A,length,5);



return 0;

}