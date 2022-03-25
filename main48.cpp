#include<iostream>
#include<fstream>
using namespace std;

class students{
    public:
    string name;
    int roll;
    string branch;
    // friend ofstream & operator<<(ofstream &ofs,students &s);
    
};
  

int main(){
students s1;
s1.name = "Aadrsh";
s1.roll = 25;
s1.branch = "CS";
  
   ofstream ofs("students.txt");
   ofs<<s1.name<<endl;
   ofs<<s1.roll<<endl;
   ofs<<s1.branch<<endl;

   ofs.close();

    return 0;
}