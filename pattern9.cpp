#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
      
      for (char i = 1; i <=n; i++)
      {
        for (char j = 1; j <=n; j++)
        {
            char ch = 'A'+i+j-2;
            cout<<ch;
            ch++;
        }
         cout<<endl;
      }
      
return 0;
}