#include <iostream>
using namespace std;

void Printarray(int *a, int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout<<" "<< a[i];
    }
       cout<<endl;
}
  void Bubblesort(int *a,int n ){
      int temp;
      int issorted=0;
      for (int i = 0; i <=n-1; i++)
      {
           cout<<"This is pass "<<i+1<<endl;
           issorted=1;
          for (int j = 0; j<=n-1-i; j++)
          {
              if(a[j]>a[j+1])
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]= temp;
                  issorted=0;
              }
              
              
          }
            if (issorted)
              {
                  return;
              }
          
      }
      
  }

int main(){
    // int a[] = {23, 44, 1, 2, 76, 56, 94, 19};
    int a[]= {1,2,3,4,5,6,7,8};
    int n = 7;

    Printarray(a,n);
    Bubblesort(a,n);
    Printarray(a,n);
   

    return 0;
}