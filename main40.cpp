#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle()
    {
        length = 1;
        width = 1;
    }
    Rectangle(int l, int b){
        length = l;
        width = b;
    }

    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        width = rect.width;
    }

    void area()
    {
       cout<< length * width;
    }
};

int main()
{
    Rectangle r(12,5);
    Rectangle r2(r);
    r2.area();

    return 0;
}