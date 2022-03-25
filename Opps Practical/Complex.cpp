#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int imaginary;

    void insert()
    {
        cout << "Enter real number: ";
        cin >> real;
        cout << "Enter imaginary number: ";
        cin>>imaginary;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    complex addComp(complex C1, complex C2)
    {
        // creating temporary variable
        complex temp;

        // adding real part of complex numbers
        temp.real = C1.real + C2.real;

        // adding Imaginary part of complex numbers
        temp.imaginary = C1.imaginary + C2.imaginary;

        // returning the sum
        return temp;
    }
};

int main()
{
    complex C1,C2,C3;
    C1.insert();
    cout<<"complex number 1 is: ";
    C1.display();
    C2.insert();
    cout<<"complex number 2 is: ";
    C2.display();

     cout<<"The given complex number is: ";
     C3 = C3.addComp(C1,C2);
     cout<<C3.real<<" + i"<<C3.imaginary<<endl;

    return 0;
}