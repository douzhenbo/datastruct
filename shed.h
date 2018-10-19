#ifndef SHED_H_INCLUDED
#define SHED_H_INCLUDED
#define maxsize 50

typedef struct shed
{
    int data[maxsize];
    int top;
}shed;

void init_shed(shed *);
void shedempty(shed *);
int push(shed *,int);
int  pop(shed *s,int *x);
int get_top(shed *s,int *x);


#endif // SHED_H_INCLUDED
