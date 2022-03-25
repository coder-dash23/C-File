#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
};

/*
For a protected member :
                      public derivation   private Derivation    Protected Derivation

1.Private members      Not inherited         Not inherited         Not inherited
2.protected members    protected             private               protected
3.public members       public                private               protected

*/


class Derived: Base{

};

int main(){


    return 0;
}