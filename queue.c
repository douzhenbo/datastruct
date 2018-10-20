#include "stdio.h"
#include "queue.h"


void init_queue(queue *s)
{
    s->front=s->tail=0;
}




void push_queue(queue *s,int x)
{
    if(s->tail!=size)
    {
        s->data[s->tail]=x;
        s->tail++;
    }
}



int get_queue(queue* s,int *x)
{
    if(s->front==s->tail)
    {
        printf("该队列为空\n");
        return 0;
    }
    else
    {
        *x=s->data[s->front];
        return *x;
    }
}



int delete_queue(queue * s)
{
    if(s->front!=s->tail)
    {
        s->front++;
        return 1;
    }
    else
    {
        printf("该队列为空\n");
        return 0;
    }
}
