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
    printf("ɾ����Ԫ��Ϊ%d\n",x);
    shedempty(&dou);
    get_top(&dou,&x);
    printf("ջ��Ԫ��Ϊ%d\n",x);

}

