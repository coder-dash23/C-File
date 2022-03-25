//Circularly Linkded list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; 

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory is free for node with Data " << value << endl;
    }
};

void InsertNode(Node *&tail, int position, int d)
{
    // empty List

    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != position)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if (tail==NULL)
    {
       cout<<"list Is Empty"<<endl;
    }
    

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << "List is empty, Please check again" << endl;
    }
    // Non-empty List
    else
    {

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if (curr == prev)
        {
            tail = NULL;
        }

        else if(tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node *tail = NULL;

    InsertNode(tail, 5, 3);
    print(tail);

    InsertNode(tail, 3, 5);
    print(tail);

    InsertNode(tail, 5, 7);
    print(tail);

    InsertNode(tail, 7, 9);
    print(tail);

    deleteNode(tail, 10);
    print(tail);

    return 0;
}