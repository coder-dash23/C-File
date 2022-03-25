#include <iostream>
using namespace std;

int checkPalindrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string str = "madam";

    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
    {
        cout << "The given string is Palindrome" << endl;
    }

    else
    {
        cout << "The given string is not a palindrome " << endl;
    }

    return 0;
}