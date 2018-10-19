#include <stdio.h>
#include <stdlib.h>
#include "text.h"
#include "shed.h"
#include "queue.h"



int main()
{
    int x,y=0;
    queue dou;
    init_queue(&dou);
    push_queue(&dou,5);
    get_queue(&dou,&x);
    printf("%d\n",x);
    delete_queue(&dou);
    get_queue(&dou,&y);
    printf("%d\n",y);
    return 0;

}

