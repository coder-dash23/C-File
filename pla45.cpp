//How to delete a Middle element in  a given stack

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> s, int count, int size)
{

    // Base condition
    if (count == size / 2)
    {
        s.pop();
    }

    int num = s.top();
    s.pop();

    // RECURSIVE CALL
    solve(s, count + 1, size);
    s.push(num);
}

   void deleteMiddle(stack<int>&s,int N)
   {
       int count = 0;
       solve(s,count,N);
   }

int main()
{

    stack<int> a = {1,2,3,4,5,6};

    deleteMiddle(a,a.size());


    return 0;
}