#include<iostream>
using namespace std;
 //Adarsh Jaiswal_00516412820

class Room_Area{
   float length;
   float width;

   public:
     void set_data(){
       cout<<"Enter the length"<<endl;
       cin>>length;
       cout<<"Enter the width"<<endl;
       cin>>width;
     }
     //Friend function declaration
};
     float print_data(Room_Area ob){
         cout<<"The length of the room is: "<<ob.length<<endl;
         cout<<"The width of the room is: "<<ob.width<<endl;
         return ob.length * ob.width;
     }

int main(){
    Room_Area object;
    object.set_data();
    cout<<"Area of the Room is: "<<print_data(object);

    return 0;
}