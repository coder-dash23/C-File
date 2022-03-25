#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Display base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{

public:
    int var_derived;
    void display()
    {
        cout << "Display base class variable var_base " << var_base << endl;
        cout << "Diaplaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; //Pointing base class pointer to derived class

    // base_class_pointer->var_base = 34;
    // // base_class_pointer->var_derived = 134; //Will throw an error
    // base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    base_class_pointer->var_base = 34;
    derived_class_pointer->var_derived = 1300;
    derived_class_pointer->display();

    return 0;
}