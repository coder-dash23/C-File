#include<iostream>
using namespace std;

int main(){
   int x,y,choice,lcm,hcf;
   cout<<"Select your choice"<<endl;
   cout<<"1.Addition"<<endl;
   cout<<"2.Substraction"<<endl;
   cout<<"3.Multiplication"<<endl;
   cout<<"4.Division"<<endl;
   cout<<"5.LCM"<<endl;
   cout<<"6.HCF"<<endl;

   cout<<"Enter your choice Number"<<endl;
   cin>>choice;
   
   cout<<"Enter the two numbers "<<endl;
   cin>>x>>y;

   switch (choice)
   {
   case 1:
      cout<<x+y;

      break;


       case 2:
      cout<<x-y;

      break;
       case 3:
      cout<<x*y;

      break;
       case 4:
      cout<<x/y;

      break;
      case 5:
      if(x>y)
     lcm = x;
   else
    lcm = y;
    while(true) {
      if( lcm%x==0 && lcm%y==0 ) {
         cout<<"The LCM of "<<x<<" and "<<y<<" is "<<lcm;
         break;
      }
      lcm++;
   }

      break;
      case 6:
      if ( y > x) {   
    int temp = y;
    y = x;
    x = temp;
  }
    
  for (int i = 1; i <=  y; i++) {
    if (x % i == 0 && y % i ==0) {
      hcf = i;
       cout<<"The HCF of "<<x<<" and "<<y<<" is "<<hcf;
       break;
    }
  }

      break;

   default:
       break;
   }
    
    return 0;
}