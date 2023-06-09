#include <iostream>
using namespace std;
#if 0
int f(int n){
    if(n<=1){
        return 0;
    }else{
        return n*f(n-1);
    }
}
#else
int f(int n){
    int val=1;
    int i;
    for(i=2;i<=n;i++){
        val*=i;
    }
    return val;
}
#endif
int main(){
    cout<<"5! = "<<f(5)<<endl;
    return 0;
}
