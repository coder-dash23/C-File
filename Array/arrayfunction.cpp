#include<iostream>
using namespace std;

//Display function of an array

void displayArray(int A[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << " " << A[i];
    }
}
//Get function in c++

int get(int A[], int index,int length){
    for ( int i = 0; i < length-1; i++)
    {

      index =   A[i]; 
       
   }
   return index;
  
    
}


//Set Function in C++

// int Set(int A[], int index,int element,int length){
   
//    for (int i = 0; i < length; i++)
//    {
//       if ( A[index] == A[i])
//       {
//          A[i] = element;
//       }
//    }
   

//}
                                        
int main(){
    int A[100] = {1,2,3,4,5,6};
    int length = 6;
    int element = 45;

displayArray(A, 6);

cout<<endl;

int getElement =  get(A,4,length);

   cout<<getElement;


//    int setElement = Set(A,3,element,length);


//    cout<<setElement<<endl;

//    length++;

//    displayArray(A, 6);

    return 0;
}