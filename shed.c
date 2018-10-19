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
        printf("��ջΪ��\n");
    }
    else
    {
        printf("��ջ��Ϊ�գ���%d��Ԫ��\n",s->top+1);
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
        printf("��ջ����ɾ��\n");
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
        printf("��ջΪ��ջ\n");
        return 0;
    }
    else
    {
        *x=s->data[s->top];
        return 1;
    }
}
