#include <iostream>
using namespace std;
class employee
{
public:
    int eid;
    string ename;
    float esalary;
    void insert(int a, string b, int c);
    void display();
};

void employee::insert(int a, string b, int c)
{
    eid = a;
    ename = b;
    esalary = c;
}

void employee::display()
{
    cout << "The ID of the employee is " << eid << endl;
    cout << "The name of the employee is " << ename << endl;
    cout << "The salary of the employee is " << esalary << endl;
}
int main()
{
    int N;
    cout << "Enter the value of N" << endl;
    cin >> N;
    employee e1[N];
    int salary, employeeid;
    string name;
    for (int j = 0; j < N; j++)
    {
        cout << "Enter the employee id of employee " << j + 1 << endl;
        cin >> employeeid;
        cout << "Enter the name of the employee " << j + 1 << endl;
        cin >> name;
        cout << "Enter the salary of the employee " << j + 1 << endl;
        cin >> salary;

        cout << endl;

        e1[j].insert(employeeid, name, salary);
        cout << "The details of employee " << j+1 << " is:" << endl;
        e1[j].display();

        cout << endl;
    }

    return 0;
}