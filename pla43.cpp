#include <iostream>
using namespace std;

class Stack
{
public:
    char *arr;
    int top;
    int size;

    Stack(int size)
    {

        this->size = size;
        arr = new char[size];  //Dynamic Memory allocation
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }

        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }

        else
        {
            cout << "Stack underflow";
        }
    }

    int peak()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }

        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(6);

    st.push('A');
    st.push('B');
    st.push('C');
    st.push('D');
    st.push('E');
    st.push('F');
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    // int empty =  st.isEmpty();

   for (int i = 0; i < st.size; i++)
    {
        cout << st.arr[i] << " ";
    }

    // for (int i = 0; i < st.size(); i++)
    // {
    //     cout<<st.arr[i]<<" ";
    // }

    if (empty)
    {
        cout << "Stack is Empty" << endl;
    }

    else
    {
        cout << "Stack is Not empty" << endl;
    }

    return 0;
}