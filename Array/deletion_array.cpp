#include<iostream>
using namespace std;

void displayArray(int A[], int n){
   for (int i = 0; i < n; i++)
   {
      cout<<" "<<A[i];
   }
   
}

int indDeletion(int A[],int index, int length, int size){
    if (length == 0)
    {
        cout<<"Deletion cannot takes place because the array is empty";
    }

    else{
         for (int i = index; i < length - 1; i++)
         {
            A[i] = A[i+1];
            return 1;
         }

         
    }
    
}


int main(){
    int A[100] = {3,4,5,6,7};
    int length = 5;
    int index = 3;

    displayArray(A,length);
    cout<<endl;

    indDeletion(A,index,length,100);
    length--;

    displayArray(A,length);

return 0;
}