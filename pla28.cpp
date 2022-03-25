#include <iostream>
using namespace std;

int getSum(int *A,int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
       sum = sum + A[i];
    }
    return sum;
}

int main()
{

  int n;
  cin>>n;

  int *arr =  new int[n];

  for (int i = 0;  i< n; i++)
  {
     cin>>arr[i];
  }
  cout<<endl;

  
  for (int i = 0;  i< n; i++)
  {
     cout<<arr[i]<<" ";
  }
  cout<<endl;


  int ans = getSum(arr,n);

  cout<<"answer is "<<ans<<endl;
  




return 0;
}