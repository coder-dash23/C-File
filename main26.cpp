#include<iostream>
using namespace std;

int main(){
     
     int a = 4;
     int* ptr = &a;
     cout<<"The value of a is "<<*ptr<<endl;

    //  int *p = new int(40);
     float *p = new float(40.789);
     cout<<"The value at address p is "<<*(p)<<endl;

     int *arr = new int[3];
      arr[0] = 10;
      arr[1] = 20;
      arr[2] = 4;
     cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
     cout<<arr[2]<<endl;

    return 0;
}