#include <iostream>
using namespace std;

class Innova
{
public:
    static int price;
     Innova()
    {
        cout << "This is Inoova car price is " << endl;
    }
    static int getPrice()
    {
        return price;
    }
};
    int Innova ::price = 120000;

int main()
{
    cout<<Innova::getPrice();
    return 0;
}