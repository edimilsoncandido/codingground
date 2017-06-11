#include <stdio.h>

int main()
{
    int x = 1, y = 0;
        if((!x || !y) && (x<y))
    printf("10");
    else if(!y && (x<y))
    printf("20");
    else if(!y && x )
    printf("30");
    printf("\nFim!");

    return 0;
}

