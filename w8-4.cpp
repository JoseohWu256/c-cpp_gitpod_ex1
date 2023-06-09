#include <iostream>
using namespace std;
int main(){
    int a,i;
    float s=0;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        s+=a;
    }
    printf("avg = %f",s/10);
    return 0;
}
