#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream outfile("my.txt");

    outfile<<"Hello"<<endl;
    outfile<<25<<endl;
    outfile<<"cse"<<endl;
   
    outfile.close();

    return 0;
}