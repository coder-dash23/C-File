#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void create(int A[], int n)
{
    int i;
    struct node *t, *last;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int Rcount(struct node *p)
{

    if (p != NULL)
    {
        return 1 + Rcount(p->next);
    }

    else
    {
        return 0;
    }
}

int sum(struct node *p)
{
    int sum = 0;

    while (p != 0)
    {
        sum = sum + p->data;
        p = p->next;
    }

    return sum;
}

int Max(struct node *p)
{
    int max = INT32_MIN;

    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

node *linersearch(struct node *p, int key)
{
    struct node *q;
    while (p != NULL)
    {
        if (key == p->data)
        {

            q->next = p->next;
            p->next = head;
            head = p;
            return (p);
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct node *temp;
    int A[] = {2, 3, 34, 5, 6};
    int n = sizeof(A) / sizeof(int);
    int key;

    create(A, n);

    cout << "The given linked list is " << endl;

    display(head);

    cout << endl;

    cout << "The length is " << Rcount(head) << endl;

    cout << "The sum is " << sum(head) << endl;

    cout << "Max element in the given linkedlist is " << Max(head) << endl;

    temp = linersearch(head, 34);

    if (temp)
    {
        cout << "Key is found " << temp->data << endl;
        ;
    }

    else
    {
        cout << "Key is not found";
    }
    
 display(head);

    return 0;
}