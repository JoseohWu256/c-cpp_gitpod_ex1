#include <iostream>
using namespace std;
int main(){
    int a,i,min;
    scanf("%d",&min);
    for(i=0;i<3;i++){
        scanf("%d",&a);
        if(a<min)
            min=a;
    }
    printf("min = %d",min);
    return 0;
}
