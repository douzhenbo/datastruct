#include<stdio.h>
#include "text.h"
//顺序链表操作
int insert(int i,int e,list*data)
{
    if(i<1||i>data->size+1)
    {
        return 0;
    }
    if(data->size>=11)
    {
        return 0;
    }
    for(int j=data->size;j>=i;j--)
    {
        data->a[j]=data->a[j-1];
    }
    data->a[i-1]=e;
    data->size++;
    return 1;
}

void deletes(int i,list *data)
{
    for(int j=i-1;j<data->size-1;j++)
    {
        data->a[j]=data->a[j+1];
    }
    data->a[data->size-1]=0;
    data->size--;
}
int find(list *data,int e)
{
    for(int i=0;i<=data->size-1;i++)
    {
        if(data->a[i]==e)
        {
            return i+1;
        }

    }
    return -1;
}
//顺序链表操作结束


//library *finds(library *s,int i)
//{
//    int j=1;
//    library *p=s->next;
//    if(i==0)
//    {
//        return s;
//    }
//    if(j==i)
//    {
//        return p;
//    }
//    while(p&&j<i)
//    {
//        p=p->next;
//        j++;
//    }
//    return  p;
//
//
//}
//单链表操作


library * finds(library* s,int i)
{
    int j=1;
    library *p=s->next;
    if(i<1)
    {
        return NULL;
    }
    while(i!=j&&p!=NULL)
    {
        p=p->next;
        j++;
    }
    if(p==NULL)
    {
        return NULL;
    }
    else
    {
        return p;
    }
}


int search(library *s,int e)
{
    library *p;
    p=s->next;
    int i=1;
    while(p->money!=e&&p!=NULL)
    {
        p=p->next;
        i++;
    }
    if(p->money==e)
    {
        return i;
    }
    else
    {
        return 0;
    }
}

int length(library *s)
{
    int i=0;
    library *p=s->next;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    return i;
}
//单链表操作结束


//双链表操作

people* searchs(people*s,int i)
{
    people *p=s->next;
    int j=1;
    if(i<1)
    {
        return NULL;
    }
    while(j<i&&p!=NULL)
    {
        p=p->next;
        j++;
    }

    return p;
}


