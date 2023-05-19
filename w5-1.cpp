#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x>=90)
        printf("A Tier");
    else if(80<=x && x<90)
        printf("B Tier");
    else if(70<=x && x<80)
        printf("C Tier");
    else if(60<=x && x<70)
        printf("D Tier");
    else
        printf("E Tier");
    return 0;
}
