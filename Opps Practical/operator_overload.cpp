#include <iostream>
using namespace std;
class operator_overload
{
private:
    int x;

public:
    operator_overload()
    {
        x = 10;
    }

    void operator++()
    {
        x = x + 2;
    }

    void print()
    {
        cout << "the value of x is " << x << endl;
    }
};

int main()
{
    operator_overload ov;
    ++ov;
    ov.print();

    return 0;
}