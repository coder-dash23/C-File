#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

  void moveZeroes(int A[], int n)
  {
      int low = 0;
      for (int i = 0; i < n; i++)
      {
         if (A[i] != 0)
         {
             swap(A[i],A[low]);
              low++;
         } 
      } 
  } 

int main()
{
    int A[] = {1, 2, 0, 3, 0, 4, 6, 0, 67};
    int n = sizeof(A) / sizeof(int);

    printArray(A, n);

    moveZeroes(A, n);

    printArray(A, n);

    return 0;
}