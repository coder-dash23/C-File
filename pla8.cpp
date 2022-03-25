#include <iostream>
using namespace std;

void printArray(int A[],int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
}

void Linersearch(int A[], int key, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (A[i] == key)
    {
      cout << i;
    }
  }
}

int main()
{

  int A[] = {2, 3, 4, 5, 6, 7};
  int n = sizeof(A) / sizeof(int);
  int key;

  printArray(A, n);
  cout << endl;

  cin >> key;

  Linersearch(A, key, n);

  return 0;
}