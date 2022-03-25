#include <iostream>
using namespace std;
class Stock
{
private:
    int item_no;
    string item_name;
    float price;
    int quantity;
    float discount;

public:
    // public member functions
    // used to get the details from the user

    void get_stock()
    {
        cout << "Enter the item number " << endl;
        cin >> item_no;

        cout << "Enter the name of item " << endl;
        cin >> item_name;

        cout << "Enter the price " << endl;
        cin >> price;

        cout << "Enter the quantity of the " << item_name << " " << endl;
        cin >> quantity;

        cout << "\n"
             << endl;
    }
    // used to display the output with discounted amount

    void show_item()
    {
        cout << "    Details List    " << endl;
        cout << "Item number = " << item_no << endl;
        cout << "Name of the item = " << item_name << endl;
        cout << "Original price = " << price << endl;
        cout << "Quantity of item = " << quantity << endl;
        cout << "Discounted price = " << (calculate_discount(this->quantity)) << endl;
        cout << "Amount needed to be paid = "<< (price * (this->quantity)) - calculate_discount(this->quantity) << endl;
        cout << "\n"
             << endl;
    }

    int calculate_discount(int &quantity); // function prototype in class
};

// fucntion declaration
int Stock::calculate_discount(int &quantity)
{
    if (quantity > 0)
    {
        if (quantity <= 50)
        {
            discount = 0;
        }

        else if (quantity >= 50 && quantity <= 100)
        {
            discount = (0.15 * price * quantity);
        }

        else
        {
            discount = (0.1 * price * quantity);
        }
    }

    else
        return 0;

    return discount;
}

int main(void)
{

    int n;
    cout << "Enter the no. of Inputs " << endl;
    cin >> n; // to take the number of inputs

    Stock S[n]; // creating the array of object of class Stock

    for (int i = 0; i < n; i++)
    {
        // for takking the inputs the number of times equal to inputted value "n"
        S[i].get_stock();
    }

    for (int i = 0; i < n; i++)
    {
        // for takking the inputs the number of times equal to inputted value "n"
        S[i].show_item();
    }
    return true;
}