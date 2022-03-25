#include <iostream>
using namespace std;
class employee
{
public:
    string Emp_name;
    int Emp_id;
    void display(int k)
    {
        // Taking input of eployee data
        cout << "enter the name of the employee "<<k+1 << endl;
        cin >> Emp_name;
        cout << "enter the ID of the employee" <<k+1<< endl;
        cin >> Emp_id;

    }
};

class accounts : public employee
{
public:
    float salary;
    int date, month, yoj;
    void Emp_details(int z)
    {
        cout << "enter the salary of the employee" << endl;
        cin >> salary;
        cout << "enter the year of joining" << endl;
        cin >> yoj;
        cout << "enter the month of joining" << endl;
        cin >> month;
        cout << "enter the date of joining" << endl;
        cin >> date;
    }
    void show()
    {
        cout << Emp_name << "       " << Emp_id << "       " << salary << "       " << date << "-" << month << "-" << yoj << endl;
    }
};
int main()
{
    accounts a[2];
    for (int i = 0; i <2; i++)
    {
        a[i].display(i);
        a[i].Emp_details(i);
    }
    cout << endl;
    cout << endl;

    cout << "The details of the employee is " << endl;
    cout << endl;
    cout << endl;
    cout << "NAME" << "       " << "EMPID" << "       " << "SALARY" << "       " << "DATE OF JOINING" << endl;


    for (int j = 0; j < 2; j++)
    {
        a[j].show();
    }

    return 0;
}