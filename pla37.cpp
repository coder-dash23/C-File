#include <iostream>
using namespace std;

int fib(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }

  else
  {
    return fib(n - 1) + fib(n - 2);
  }
}

int main()
{

  int n = 2;

  int fibnocci = fib(n);

  cout << "The value is " << fibnocci;

  return 0;
}