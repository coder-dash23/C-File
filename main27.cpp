#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void Setdata(int a,float b){
        id = a;
        price = b;
    }

    void getdata(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

int main(){
    int p,i;
    float q;
    int size = 3;
    // int *ptr  = &size;
  shop *ptr = new shop[size];
  shop *ptrTemp  = ptr;
  for (i = 0; i < size; i++)
  {
     cout<<"Enter Id and price of item "<< i+1<<endl;
     cin>>p>>q;
     ptr->Setdata(p,q);
     ptr++;

  }

  for ( i = 0; i < size; i++)
  {
      cout<<"Item Number: "<< i+1<<endl;
      ptrTemp->getdata();
      ptrTemp++;
  }
  
  
   return 0;
    
}