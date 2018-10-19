#include <stdio.h>
#include <stdlib.h>
#include "text.h"
#include "shed.h"



int main()
{
    shed dou;
    init_shed(&dou);
    push(&dou,3);
    shedempty(&dou);
    push(&dou,4);
    push(&dou,5);
    shedempty(&dou);
    int x;
    pop(&dou,&x);
    printf("删除的元素为%d\n",x);
    shedempty(&dou);
    get_top(&dou,&x);
    printf("栈顶元素为%d\n",x);

}

