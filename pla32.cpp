//Palindromic string question in c++
#include <iostream>
#include <string.h>
using namespace std;

int main()
{

  char str[20];
  int flag = 0;
  cout << "Enter a string " << endl;
  cin >> str;
  int n = strlen(str);
  for (int i = 0; i < n; i++)
  {

    if (str[i] == str[n - i - 1])
    {
      flag = 1;
      break;
    }
  }

  if (flag)
  {
    cout << str << " is  palindrome " << endl;
  }
  else
  {
    cout << str << " is not  palindrome " << endl;
  }

  system("Pause");
  return 0;
}