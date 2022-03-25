#include <iostream>
using namespace std;

struct circularqueue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isEmpty(struct circularqueue *q)
{
  if (q->r== q->f)
  {
    return 1;
  }
  return 0;
}

int isFull(struct circularqueue *q)
{
  if ((q->r+1)%q->size == q->f)
  {
    return 1;
  }
   return 0;
}

void enqueue(struct circularqueue *q, int val)
{
  if (isFull(q))
  {
    cout << "This circular Queue is Full" << endl;
  }
  else
  {
    q->r = (q->r+1)%q->size;
    q->arr[q->r] = val;
    cout << "Enqued element " << (val) << endl;
  }
}

int dequeue(struct circularqueue *q)
{
  int a = -1;
  if (isEmpty(q))
  {
    cout << "circular Queue is Empty";
  }
  else
  {
    q->f=(q->f+1)%q->size;
    a = q->arr[q->f];
  }
  return a;
}

int main()
{

  struct circularqueue q;
  q.size = 4;
  q.f = q.r= 0;
  q.arr = (int *)malloc(q.size * sizeof(int));
  cout << "Queue has been created successfully" << endl;

  enqueue(&q, 12);
  enqueue(&q, 13);
  enqueue(&q, 14);
  
  cout<<"Dequeueing element "<<dequeue(&q)<<endl;
  cout<<"Dequeueing element "<<dequeue(&q)<<endl;
  cout<<"Dequeueing element "<<dequeue(&q)<<endl;

  enqueue(&q, 45);
  enqueue(&q, 45);
  enqueue(&q, 45);
 





  if (isEmpty(&q))
  {
    cout << "circular queue is Empty" << endl;
  }
  if (isFull(&q))
  {
    cout << "circular queue is Full";
  }

  return 0;
}