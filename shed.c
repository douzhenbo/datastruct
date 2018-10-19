#include <stdio.h>
#include "shed.h"

void init_shed(shed *s)
{
    s->top=-1;
}

void shedempty(shed *s)
{

    if(s->top==-1)
    {
        printf("该栈为空\n");
    }
    else
    {
        printf("此栈不为空，有%d个元素\n",s->top+1);
    }
}

int  push(shed *s,int x)
{
    if(s->top==maxsize-1)
        return 0;
    s->top++;
    s->data[s->top]=x;
    return 1;
}

int  pop(shed *s,int *x)
{
    if(s->top==-1)
    {
        printf("空栈不能删除\n");
        return 0;
    }
    else
    {
       *x=s->data[s->top--];
       return 1;

    }
}


int get_top(shed *s,int *x)
{
    if(s->top==-1)
    {
        printf("此栈为空栈\n");
        return 0;
    }
    else
    {
        *x=s->data[s->top];
        return 1;
    }
}
