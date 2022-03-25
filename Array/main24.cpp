#include <iostream>
using namespace std;

class Base
{
    int data1; //Private by default and  data cannot be inheritable;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base :: getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
};

class Derived : private Base
{
    int data3;

public:
    void process();
    void Display();
};

void Derived ::process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived :: Display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{

    Derived der;
    // der.setData();
    der.process();
    der.Display();

    return 0;
}