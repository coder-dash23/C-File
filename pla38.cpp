//Singly Linklist

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor

    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtposition(Node *&tail, Node *&head, int position, int d)
{

    Node *temp = head;
    int cnt = 1;
    // Inserting before head Node
    if (position == 1)
    {
        InsertAtHead(head, d);
    }

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting after Tail Node

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
    }

    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deleteNode(int position, Node *&head)
{
    // Deleting first Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
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

int main()
{

    // Creating a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 14);
    print(head);

    InsertAtTail(tail, 9);
    print(head);
    InsertAtTail(tail, 8);
    print(head);

    insertAtposition(tail, head, 6, 22);
    print(head);

    cout << "head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNode(5, head);
    print(head);

    cout << "head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}