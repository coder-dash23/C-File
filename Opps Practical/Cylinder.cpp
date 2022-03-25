#include <iostream>
using namespace std;

class circle
{
protected:
    int r;
};
class Rectangle
{
protected:
    int l;
};

class Cylinder : protected circle, protected Rectangle
{
public:
    void volume()
    {
        cout << "Enter the value of Radius: ";
        cin >> r;
        cout << "Enter the value of length: ";
        cin >> l;
        cout << "Volume of cylinder is " << 3.14 * r * r * l;
    }
};

int main()
{

    Cylinder A;
    A.volume();

    return 0;
}