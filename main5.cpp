#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int lcm(void);      //function prototyping
int hcf(void);      // function prototyping
int add(void);      // function prototyping
int subtract(void); // function prototyping
int multiply(void); // function prototyping
int divide(void);   // function prototyping

int main(void)
{
    int choice;

    cout << "   Welcome , There  " << endl;
    cout << "1. ADD  " << endl;
    cout << "2. Subtract  " << endl;
    cout << "3. Multiply  " << endl;
    cout << "4. Divide  " << endl;
    cout << "5. L.C.M.  " << endl;
    cout << "6. H.C.F.  " << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;

    case 2:
        subtract();
        break;

    case 3:
        multiply();
        break;

    case 4:
        divide();
        break;

    case 5:
        lcm();
        break;

    case 6:
        hcf();
        break;

    default:
        cout << "Invalid choice (range of input must be in 1-2 )" << endl;
    }

    return 0;
}

int add(void)
{
    int n1, n2;
    cout << "Enter the two numbers \n";

    cin >> n1 >> n2;
    cout << n1 + n2 << endl;

    return 0;
}

int subtract(void)
{
    int n1, n2;
    cout << "Enter the two numbers \n";

    cin >> n1 >> n2;

    cout << (n1 > n2 ? n1 - n2 : n2 - n1) << endl;

    return 0;
}

int multiply(void)
{
    int n1, n2;
    cout << "Enter the two numbers \n";

    cin >> n1 >> n2;
    cout << n1 * n2 << endl;

    return 0;
}

int divide(void)
{
    int n1, n2;
    cout << "Enter the two numbers \n";

    cin >> n1 >> n2;
    cout << (n1 > n2 ? n1 / n2 : n2 / n1) << endl;

    return 0;
}

int lcm(void)
{
    lli n1, n2;
    cout << "Enter the two numbers \n";

    cin >> n1 >> n2;

    lli maxi = (n1 > n2) ? n1 : n2;

    while (true)
    {
        if (maxi % n1 == 0 && maxi % n2 == 0)
        {
            cout << "The lcm of two no.s is " << maxi << endl;
            break;
        }
        maxi += maxi;
    }

    return maxi;
}

int hcf(void)
{
    int hcf = 1;

    int n1, n2;

    cout << "Enter the two no.s \n";
    cin >> n1 >> n2;

    int mini = (n1 > n2) ? n2 : n1;
    for (int i = 1; i <= mini; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF of two no.s is " << hcf << endl;
    return 0;
}