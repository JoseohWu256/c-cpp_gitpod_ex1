#include <stdio.h>
int main (void)
{
    int x;
    scanf("%d",&x);
    switch(x%5){
        case 0:
            printf("You are team A.");
        break;
        case 1:
            printf("You are team B.");
        break;
        case 2:
            printf("You are team C.");
        break;
        case 3:
            printf("You are team D.");
        break;
        case 4:
            printf("You are team E.");
        break;
    }
    return 0;
}
