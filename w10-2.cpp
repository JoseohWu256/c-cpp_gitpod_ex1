#include <stdio.h>
void display(int* age1,int* age2){
    printf("%d\n",*age1);
    printf("%d\n",*age2);
}
int main() {
    int ageArr[]={2,8,4,12};
    display(&ageArr[1],&ageArr[2]);
}
