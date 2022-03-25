#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;
    

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "Your id is " << id <<endl;
    }

    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int employee::count = 1000;
int main()
{
    employee Adarsh, Ankit;
    Adarsh.setdata();
    Adarsh.getData();
    employee::getcount();

    Ankit.setdata();
    Ankit.getData();
    employee::getcount();
    

    return 0;
}