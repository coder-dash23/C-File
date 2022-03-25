#include<iostream>
#include<vector>
using namespace std;

   int main(){
   vector<int>  v = {10,20,30,40,50};
    v.push_back(25);
    v.push_back(100);
    v.push_back(100);
    vector<int>::iterator itr;
    cout<<"Using Iterator"<<endl;
    // for ( itr = v.begin(); itr!=v.end(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }
    //   cout<<endl;
      cout<<"Using for each loop"<<endl;
      for(int x:v){
        cout<<x<<" ";
    }
    
    return 0;
}

//*********vector Container is excatly same as that of list conatiner***********

