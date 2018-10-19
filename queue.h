#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define  size 50
typedef struct queue
{
    int data[size];
    int front,tail;
}queue;

void init_queue(queue *s);
void push_queue(queue *s,int x);
int get_queue(queue* s,int *x);
int delete_queue(queue * s);
#endif // QUEUE_H_INCLUDED
