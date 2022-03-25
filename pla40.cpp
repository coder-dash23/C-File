//Doubly Linked List
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
         int value = this->data;
         if (this->next!=NULL)
         {
            delete next;
            this->next  = NULL;
         }
        cout<< "Memory free for node with data "<<value<<endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Gives Length of a linked list
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp!= NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&tail, Node *&head, int d)
{
    // Empty Linkedlist
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void InsertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // Inserting before head Node
    if (position == 1)
    {
        InsertAtHead(tail, head, d);
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, d);
    }

    Node *nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

   void deleteNode(int position, Node *&head)
{
    // Deleting first Node
    if (position == 1)
    {
        Node *temp = head;
        
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(tail, head, 23);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtHead(tail, head, 20);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtTail(tail, head, 11);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtTail(tail, head, 13);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtTail(tail, head, 14);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtPosition(tail, head, 3, 34);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtPosition(tail, head, 4, 35);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtPosition(tail, head, 2, 36);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    InsertAtPosition(tail, head, 6, 37);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    // InsertAtPosition(tail, head, 1, 40);
    // print(head);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    
    deleteNode(9,head);
    print(head);

    return 0;
}