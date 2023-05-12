#include <stdio.h>
int
main (void)
{
    int y,m;
    scanf("%d",&y);
    scanf("%d",&m);
    if(m==4 or m==6 or m==9 or m==11)
        printf("30 days");
    else if(m==2)
        if(y%4==0 and y%100!=0)
            printf("29 days");
        else
            printf("28 days");
    else
        printf("31 days");
    return 0;
}
