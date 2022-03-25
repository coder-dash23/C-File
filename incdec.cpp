#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 11;

  cout << (a & b) << endl;
  cout << (a | b) << endl;
  cout << (a ^ b) << endl;
  cout << (~b) << endl;
  cout << (20 >> 1) << endl;
  cout << (20 << 1) << endl;

  int i = 10;

  cout << i++ << endl;
  cout << ++i << endl;
  cout << i-- << endl;
  cout << --i << endl;

  return 0;
}