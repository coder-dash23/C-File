#include<iostream>
using namespace std;

struct Length{
    int feet;
    float inches;

void Display(struct Length L1){
    cout<<"\n Height=: "<<feet<<"\'"<<inches<<"\""<<endl;
}

void scale(struct Length &L2, float n){
    float h=(inches+(feet*12))*n;
    feet= int (h/12);
    inches= h-(feet*12);
}

};

int main(){
    struct Length L1;

    cout<<" Enter the Height in feet & inches ";
    cin>>L1.feet>>L1.inches;
    
    float n;
    cout<<"Enter the scaling factor: ";
    cin>>n;

    L1.Display(L1);

    L1.scale(L1, n);

    cout<<"nAfter Scaling by "<<n<<": ";

    L1.Display(L1);

    return 0;

}