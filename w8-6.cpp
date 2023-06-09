#include <iostream>
using namespace std;
int main(){
    int a,i,p=0,n=0,z=0;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        if(a>0)
            p+=1;
        else if(a<0)
            n+=1;
        else
            z+=1;
    }
    printf("Positive:%d\nNegative:%d\nZero:%d",p,n,z);
    return 0;
}
