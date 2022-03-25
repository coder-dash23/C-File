#include <iostream>
using namespace std;

struct queue
{
  int size;
  int f;
  int r;
  int *arr;
};

int isEmpty(struct queue *q)
{
  if (q->r == q->f)
  {
    return 1;
  }
  return 0;
}

int isFull(struct queue *q)
{
  if (q->r == q->size - 1)
  {
    return 1;
  }
  return 0;
}

void enqueue(struct queue *q, int val)
{
  if (isFull(q))
  {
    cout << "This Queue is Full" << endl;
  }
  else
  {
    q->r++;
    q->arr[q->r] = val;
    cout << "Enqued element " << (val) << endl;
  }
}

int dequeue(struct queue *q)
{
  int a = -1;
  if (isEmpty(q))
  {
    cout << "Queue is Empty";
  }
  else
  {
    q->f++;
    a = q->arr[q->f];
  }
  return a;
}

int main()
{

  struct queue q;
  q.size = 4;
  q.f = -1;
  q.r = -1;
  q.arr = (int *)malloc(q.size * sizeof(int));
  cout << "Queue has been created successfully" << endl;

  enqueue(&q, 12);
  enqueue(&q, 13);
  enqueue(&q, 14);
  enqueue(&q, 15);

  if (isEmpty(&q))
  {
    cout << "queue is Empty" << endl;
  }
  if (isFull(&q))
  {
    cout << "queue is Full";
  }

  return 0;
}