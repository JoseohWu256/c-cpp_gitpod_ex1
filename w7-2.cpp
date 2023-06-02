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
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("%d + %d = %d\n",a,b,add(a,b));
    printf("%d - %d = %d\n",a,b,mns(a,b));
    printf("%d * %d = %d\n",a,b,tms(a,b));
    printf("%d / %d = %d\n",a,b,dvi(a,b));
    return 0;
}
