#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a = 20;
    int b;
    friend B;
};

class B
{
public:
    A my;
    void func1()
    {
        cout << my.a << endl;
    }
};

int main()
{
    B b;
    b.func1();

    return 0;
}