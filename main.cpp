#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
void Initcounter(void){ counter = 0;}
void getPrice(void);
void Display(void);
};

void shop :: getPrice(void)
{
    cout << "Enter id of your item no." << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item no." << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::Display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price with id no." << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;

    dukaan.Initcounter();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.Display();

    return 0;
}