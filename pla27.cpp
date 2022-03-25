#include <iostream>
using namespace std;

int& func(int a)
{
  int num = a;
  int &ans = num;
  return ans;
}

int* fun(int n)
{
  int *ptr = &n;
  return ptr;
}

int update2(int &n)
{
  n++;
}

int update(int n)
{
  n++;
}

int main()
{
  int i = 5;

  cout << i << endl;

  update2(i);

  cout << i << endl;

  fun(i);

  return 0;
}