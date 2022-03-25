#include <iostream>
#include<math.h>
using namespace std;

//Programm to convert binary to decimal

int main()
{

    int n;
    cin >> n;
    int i = 0;
    int dec_num = 0;
    while (n != 0)
    {
        int digit = n % 10;

        dec_num = dec_num + digit * pow(2, i);
         n = n / 10;
        i++;
    }

    cout << dec_num;

    return 0;
}