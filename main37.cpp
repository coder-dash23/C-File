#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }

    cout<<endl;
    
}

int main(){
    vector<int> vec1(); // Zero length integer vector
    vector<char> vec2(4); //4-element char vector
    vector<char>vac3(vec2); //4-element character vector from vec2
    vector<int> v(6,3); //6-element vector of 3s
     int size,element;
    cout<<"Enter the size of an vector "<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
       cout<<"The element inserted in the vector is "<<endl;
       cin>>element;
       vec1.push_back(element);
    }

    display(vec1);

    // vec1.pop_back();
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+3,50000,80);
   display(vec1);


    return 0;
}