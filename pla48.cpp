//Reverse a Stack using Recursion
#include <iostream>
using namespace std;

void insertAtBottom(stack<int> s, int x)
{
    if (s.empty())
    {
        s.push(x);
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, x);
    s.push(num);
}

void reverseStack(stack<int> &s)
{
    // Base case

    if (s.empty())
    {
        return;
    }

    int num = s.pop();

    reverseStack(s);
    insertAtBottom(s, num);
}

int main()
{

    return 0;
}