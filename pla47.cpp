//Insert an element on the bottom of the stack
#include <iostream>
#include<stack>
using namespace std;

void solve(stack<int> s,int x)
{
    if (s.empty())
    {
        s.push(x);
    }

    int num = s.top();
    s.pop();

    solve(s,x);
    s.push(num);    
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    solve(s,45);
    s.push(10);
    s.push(20);
    cout<<s.top();
    
    
return 0;
}