#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void complexNumber(int n1 , int n2){
           a = n1;
           b = n2;
        }

        void printNumber(){
            cout<<"The given complex number "<<a<<" + "<<b<<"i"<<endl;
        }

        void complex
    };

int main(){
    complex c1,c2,c3;
    c1.complexNumber(2,3);
    c1.complexNumber(4,3);
    c2.complexNumber(4,6);
    c2.complexNumber(5,1);
    c3.complexNumber(9,1);
    c3.complexNumber(6,1);
    c1.printNumber();
    c1.printNumber();
    c2.printNumber();
    c2.printNumber();
    c3.printNumber();
    c3.printNumber();



    

    return 0;
}