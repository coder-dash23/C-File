#include <iostream>
#include<map>
using namespace std;

int main()
{
     map<int,string> m;
     m.insert(pair<int,string>(1,"John"));
     m.insert(pair<int,string>(2,"Harry"));
     m.insert(pair<int,string>(3,"Adarsh"));
     m.insert(pair<int,string>(4,"Vipul"));
     map<int,string>::iterator itr;
     cout<<"Using Iterator"<<endl;
     for (itr = m.begin(); itr!=m.end(); itr++)
     {
        cout<<itr->first<<" "<<itr->second<<endl;
     }
     itr = m.find(2);
     cout<<"Value found is"<<endl;
     cout<<itr->first<<" "<<itr->second<<endl;


return 0;
}