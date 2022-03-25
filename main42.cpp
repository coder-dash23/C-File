#include <iostream>
using namespace std;
class shape
{
public:
    virtual void Area() = 0;
    virtual void Perimeter() = 0;
};

class Rectangle : public shape
{
private:
    float length = 12;
    float breadth = 2;

public:
    void Area()
    {
        cout << length * breadth << endl;
    }
    void Perimeter()
    {
        cout << 2 * (length + breadth) << endl;
    }
};

class Circle : public shape
{
private:
    float r = 2;

public:
    void Area()
    {
        cout << 3.14 * r * r << endl;
    }

    void Perimeter()
    {
        cout << 2 * 3.14 * r << endl;
    }
};
int main()
{
    shape *s = new Circle();
    s->Area();
    s->Perimeter();

    return 0;
}