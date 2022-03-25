#include <iostream>
using namespace std;

void printarray(int *a, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << " " << a[i];
   }
   cout<<endl;
}

void selectionsort(int *a, int n)
{
   int Minofindex, temp;
   for (int i = 0; i < n - 1; i++)
   {
        Minofindex =i;
      for (int j = i + 1; j < n; j++)
      {
         if (a[j] < a[Minofindex])
         {
           Minofindex=j;
         }
          
      }
           temp=a[i];
            a[i]=a[Minofindex];
            a[Minofindex]=temp;
   }
}

int main()
{
   int a[] = {2, 3, 6, 8, 4, 9, 7};
   int n = 7;

   printarray(a, n);
   selectionsort(a,n);
   printarray(a,n);

   return 0;
}