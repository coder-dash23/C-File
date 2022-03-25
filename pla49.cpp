//Sort A Stack using Recurssion
#include <iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> s,int num)
{
    if (s.empty() || (s.top()<num))
    {
        s.push(num);
    }

    int n = s.top();
    s.pop();

    sortedInsert(s,num);
    s.push(n);
}

void SortStack(stack<int> &s)
{
    //Base Case
    if (s.empty)
    {
       return;
    }
    int num = s.top();
    s.pop();

    SortStack(s);
    SortedInsert(s,num); 
}

int main()
{


return 0;
}