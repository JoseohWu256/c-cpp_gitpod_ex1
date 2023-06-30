#include <stdio.h>
void display(int* age1,int* age2){
    printf("%d\n",*(age1-1));
    printf("%d\n",*(age2+1));
}
int main() {
    int ageArr[]={2,8,4,12};
    // Passing second and third elements to 
    // display()
    display(&ageArr[1],&ageArr[2]);
    //Displaying 1st(*(1-1)) and 4th(*(2+1)) elements
}
