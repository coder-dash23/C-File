#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int val = n - i + 1;
        while (val)
        {
            cout << "*";
            val--;
        }

        cout << endl;
    }

    return 0;
}