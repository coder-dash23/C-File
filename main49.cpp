#include <iostream>
#include <fstream>
using namespace std;

class students
{
public:
    string name;
    int roll;
    string branch;
    // friend ofstream & operator<<(ofstream &ofs,students &s);
};

int main()
{
    students s1;

    ifstream ifs("students.txt");
    ifs >> s1.name;
    ifs >> s1.roll;
    ifs >> s1.branch;
    cout << s1.name<<endl;
    cout << s1.roll<<endl;
    cout << s1.branch<<endl;

     ifs.close();
    return 0;
}