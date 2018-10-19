#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED


typedef struct people
{
    int age;
    struct people *prior,*next;
}people;


typedef struct
{
    int a[11];
    int size;
}list;


typedef struct library
{
    int money;
    struct library *next;
}library;


int insert(int i,int e,list*data);
void deletes(int i,list *data);
int find(list *data,int e);
library * finds(library*,int i);
int search(library *s,int e);
int length(library *s);
people* searchs(people*s,int i);


#endif // TEXT_H_INCLUDED
