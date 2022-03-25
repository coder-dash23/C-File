#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
    int a;
    int b;

public:
    void getOperation_simple(void)
    {

        cout << "Enter the value of a is " << endl;
        cin >> a;
        cout << "Enter the value of b is " << endl;
        cin >> b;
    }
    void performOperation_simple(void)
    {
        cout << "The value of a+b is " << a + b << endl;
        cout << "The value of a-b is " << a - b << endl;
        cout << "The value of a*b is " << a * b << endl;
        cout << "The value of a/b is " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a;
    int b;

public:
    void getOperation_scientific(void)
    {

        cout << "Enter the value of a is " << endl;
        cin >> a;
        cout << "Enter the value of b is " << endl;
        cin >> b;
    }
    void performOperation_scientific(void)
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
        cout << "The value of cos(b) is " << cos(b) << endl;
        cout << "The value of sin(b) is " << sin(b) << endl;
        cout << "The value of tan(b) is " << tan(b) << endl;
    }
};

    class HybridCalculator : public simpleCalculator, public ScientificCalculator{

    };

int main()
{
    HybridCalculator Calc;
    Calc.getOperation_simple();
    Calc.performOperation_simple();
    Calc.getOperation_scientific();
    Calc.performOperation_scientific();

    return 0;
}