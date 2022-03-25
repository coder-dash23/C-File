#include <iostream>
using namespace std;

struct node
{
public:
    int data;
    struct  node *lchild;
    struct node *rchild;
};

struct node *createNode(int data)
{
    struct node *n = new node();
    n->data = data;
    n->lchild = NULL;
    n->rchild = NULL;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->lchild);
        preOrder(root->rchild);
    }
}

  void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->lchild);
        cout << root->data << " ";
        InOrder(root->rchild);    
    }
}

int main()
{
    //Constructing the root node
    //    node *p = new node();
    //    p->data = NULL;
    //    p->lchild  =NULL;
    //    p->rchild = NULL;

    //Constructing the second node

    //    node *p1 = new node();
    //    p->data = NULL;
    //    p->lchild  =NULL;
    //    p->rchild = NULL;

    //Constructing the third node

    //    node *p2 = new node();
    //    p->data = NULL;
    //    p->lchild  =NULL;
    //    p->rchild = NULL;


    struct node *p = createNode(12);
    struct node *p1 = createNode(13);
    struct node *p2 = createNode(14);
    struct node *p3 = createNode(15);
    struct node *p4 = createNode(16);
    struct node *p5 = createNode(17);
    struct node *p6 = createNode(18);
    
     //Linking the root node with left and right node

    p->lchild = p1;
    p->rchild = p2;
    p1->lchild = p3;
    p1->rchild = p4;
    p2->lchild = p5;
    p2->rchild = p6;

    preOrder(p);
    cout<<endl;
    InOrder();

    return 0;
}


