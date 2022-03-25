#include<iostream>
using namespace std;

class Room {
    int length,breadth;
public:
    void setData() {
        cout << "Enter the length : ";
        cin >> length;
        cout << "Enter the breadth : ";
        cin >> breadth;
    }
    friend float PrintData(Room ob);
};

float PrintData(Room ob) {
    return ob.length * ob.breadth;
}

int main() {
    Room object;
    object.setData();
    cout<<"Area of Room : "<<PrintData(object);
}
