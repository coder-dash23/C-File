#include<iostream>
using namespace std;

int main(){
    int A[] = {-1,-2,-3,-4,5,6,7,8};
    int length = 8;
    int i = 0;
    int j = length - 1;

     for (int i = 0; i < length ; i++)
  {
      cout<<A[i]<<" ";
  }

    while (i<j)
    {
     
  while (A[i]<0)
  {
      i++;
  }

  while (A[j]>=0)
  {
      j--;
  }

   if (i<j)
   {

   int temp;

   temp  = A[i];
   A[i] = A[j];
   A[j] = temp;

   }
     
    cout<<endl;

   for (int i = 0; i < length ; i++)
  {
      cout<<A[i]<<" ";
  }

    }

    return 0;

}

// #include<iostream>
// using namespace std;


// int main(){
// int A[100] = {1,3,4,6,8,13,45,65};
// int length = 8;
// int x;
// int j = length -1;

//   for (int i = 0; i < length ; i++)
//   {
//       cout<<A[i]<<" ";
//   }
   
//    cout<<"Which elemnent you want to insert"<<endl;
//    cin>>x;
  
//     while (A[j]>x)
//     {
//        A[j+1]  = A[j];
//        j--;
//     }
//     A[j+1]  = x;

//      for (int i = 0; i < length+1 ; i++)
//   {
//       cout<<A[i]<<" ";
//   }
//   length++;
   
    
//     return 0;
// }