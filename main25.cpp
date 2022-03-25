#include<iostream>
using namespace std;

class Base{
    int a;
    int b;

    public:
     Base(int i, int j): a(i), b(a+j){
         cout<<"The value of a is "<<a<<endl;   
         cout<<"The value of b is "<<b<<endl;
          }
};

int main(){
    Base Adarsh(3,4);

    return 0;

}