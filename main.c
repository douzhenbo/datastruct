#include <stdio.h>
#include <stdlib.h>
#include "text.h"


int main()
{
    people *head=(people *)malloc(sizeof(people));
    head->prior=NULL;
    people *tail=head;
    int x=5;
    while(x<=10)
    {
        people *s=(people *)malloc(sizeof(people));
        s->age=x;
        s->prior=tail;
        tail->next=s;
        tail=s;
        x++;
    }
    tail->next=NULL;
    people *dou=searchs(head,5);
    people *zhao=(people*)malloc(sizeof(people));
    zhao->age=21;
    dou->prior->next=zhao;
    zhao->prior=dou->prior;
    zhao->next=dou;
    dou->prior=zhao;
    people *insertss=searchs(head,5);
    printf("%d\n",insertss->age);
    return 0;
}




