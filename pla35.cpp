#include <iostream>
using namespace std;

void printArray(int *A,int n)
{ 
    cout<<"Size of array is "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
}

int binarysearch(int *A,int n,int s,int e,int key)
{
    printArray(A,n);
    if (s>e)
    {
        return 0;
    }

    int mid =(s+e)/2;
    if (A[mid]==key)
    {
      return 1;
    }

    if (A[mid]<key)
    {
        return binarysearch(A,n,mid+1,e,key);
    }

    else{
        return binarysearch(A,n,s,mid-1,key);
    }
     
}

int main()
{
    int A[] = {1,2,3,4,5,6};
    int n = sizeof(A)/sizeof(int);
    int key;
    cin>>key;

    int search = binarysearch(A,n,0,n-1,key);

  if (search)
  {
      cout<<"Element found in the given array "<<endl;
  }

  else{
      cout<<"Element is not present in the given array "<<endl;
  }
  
   
return 0;
}