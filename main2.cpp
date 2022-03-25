include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int Isempty(struct stack *ptr)
{

    if (ptr->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int Isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{

    if (Isfull(ptr))
    {
        cout << "Stack is overflow!" << endl;
    }

    else
    {

        ptr->top++;

        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{

    if (Isempty(ptr))

    {
        cout << "stack underflow!" << endl;

        return -1;
    }

    else
    {

        int val = ptr->arr[ptr->top];

        ptr->top--;

        return val;
    }
}

    int peak(struct stack*ptr,int i){

       int arryindex= ptr->top-i+1;

       if (arryindex<0)
       {
           cout<<"No element in the given stack is present";

           return -1;
            
       }

         else{
               return ptr->arr[arryindex];
         }
       
    }

        int stacktop(struct stack* ptr){

            return ptr->arr[ptr->top];
        }

          int stackbottom(struct stack* ptr){

              return ptr->arr[0];

          }

int main()
{

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    cout << "Stack has been created successfully";
    cout << Isfull(s) << endl;
    cout << Isempty(s) << endl;

    push(s, 23);
    push(s, 24);
    push(s, 25);
    push(s, 26);
    push(s, 27);
    push(s, 28);
    push(s, 29);
    push(s, 30);
    push(s, 31);
    push(s, 32);

    cout << Isfull(s) << endl;
    cout << Isempty(s) << endl;

    cout << "popped element " << pop(s) << " from the stack  " << endl;
    cout << "popped element " << pop(s) << " from the stack  " << endl;

    cout << "popped element " << pop(s) << " from the stack  " << endl;

    cout << "popped element " << pop(s) << " from the stack  " << endl;

    // cout << "popped element " << pop(s) << " from the stack  " << endl;

    // cout << "popped element " << pop(s) << " from the stack  " << endl;

    // cout << "popped element " << pop(s) << " from the stack  " << endl;
    // cout << "popped element " << pop(s) << " from the stack  " << endl;

    // cout << "popped element " << pop(s) << " from the stack  " << endl;

    // cout << "popped element " << pop(s) << " from the stack  " << endl;
     
     for (int j = 1; j <= s->top + 1; j++)
    {
           cout<<"the value at position "<<j <<" is "<<peak(s, j)<<endl;  
    }
              
                cout<<"The top element in the given stack is "<<stacktop(s)<<endl;
                cout<<"the bottom element in the given stack is "<<stackbottom(s);
    return 0;
}
