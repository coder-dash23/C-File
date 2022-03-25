#include <iostream>
using namespace std;

class Base
{
public:
    void func1()
    {
        cout << "Func1 of  class" << endl;
    }
};
class Derived : public Base
{
public:
    void func2()
    {
        cout << "Func2 of derived class" << endl;
    }

};

int main()
{
  Base *b;
  b = new Derived();
  
  b->func2();
  

    return 0;
}