#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream infile("my.txt");
    cout<<"File is opened"<<endl;
    string name;
    int roll;
    string branch;
    infile >>name >> roll >> branch;
    infile.close();
   
    cout << "Name " << name << endl;
    cout << "Roll " << roll << endl;
    cout << "branch " << branch << endl;

    return 0;
}