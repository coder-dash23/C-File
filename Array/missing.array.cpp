#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int A[] = {1, 2, 4, 5, 8, 9};
    int length = sizeof(A) / sizeof(int);
    int diff = A[0] - 0;
    int i = 0;

    display(A, length);

    cout << endl;

   for (int i = 0; i < length; i++)
   {
      if (A[i] - i != diff)
      {
          cout<<"Missing element in the given array is "<<i+diff;
          break;
      }
      
   }
   
   

return 0;
}