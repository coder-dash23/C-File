#include <iostream>
using namespace std;

class student
{

public:
    string name;
    int roll;
    float marks[5];
    float total;
    float percentage;
    void insert();
    void calculate();
    void display();
};

void student::insert()
{
         cout << "Enter the name of the student "<<endl;
        cin >> name;
        cout << "Enter the Roll no. of the student "<< endl;
        cin >> roll;
        cout << "Enter the marks of the student in m1 " << endl;
        cin >> marks[0];
        cout << "Enter the marks of the student in m2 " << endl;
        cin >> marks[1];
        cout << "Enter the marks of the student in m3 " << endl;
        cin >> marks[2];
        cout << "Enter the marks of the student in m4 " << endl;
        cin >> marks[3];
        cout << "Enter the marks of the student in m5 " << endl;
        cin >> marks[4];
}
void student ::calculate()
{
    total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    percentage = total / 5;
}

void student::display()
{
    cout << "Students Details: " << endl;
    cout << "Name of the student: " << name << endl;
    cout << "Roll no. of the student " << roll << endl;
    cout << "Total marks obtained is " << total << endl;
    cout << "percentage obtained " << percentage <<" %"<< endl;
}

int main()
{
    student A, B, C;
    cout<<"Student 1:-----> "<<endl;
    A.insert();
    A.calculate();
    cout << endl;
    A.display();
     
     cout<<endl;

    cout<<"Student 2:: "<<endl;
    B.insert();
    B.calculate();
    cout << endl;
    B.display();

    cout<<endl;

    cout<<"Student 3:: "<<endl;
    C.insert();
    C.calculate();
    cout << endl;
    C.display();

    return 0;
}