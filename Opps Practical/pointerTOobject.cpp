#include <iostream>
using namespace std;

class Recatangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Recatangle *p = new Recatangle();
    p->length = 15;
    p->width = 10;
    cout << p->area()<<endl;
    cout << p->perimeter();

    return 0;
}