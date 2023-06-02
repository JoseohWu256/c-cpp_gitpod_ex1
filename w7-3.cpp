#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;}
int mns(int a,int b){
    return a-b;}
int tms(int a,int b){
    return a*b;}
int dvi(int a,int b){
    return a/b;}
int main(){
    int a,b;
    char op;
    printf("Enter operator:");
    scanf("%c",&op);
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    switch(op){
        case'+':
            printf("%d + %d = %d\n",a,b,add(a,b));
            break;
        case'-':
            printf("%d - %d = %d\n",a,b,mns(a,b));
            break;
        case'*':
            printf("%d * %d = %d\n",a,b,tms(a,b));
            break;
        case'/':
            printf("%d / %d = %d\n",a,b,dvi(a,b));
            break;
        default:
            printf("ERROR:Operator is not correct.");
    }
    return 0;
}
