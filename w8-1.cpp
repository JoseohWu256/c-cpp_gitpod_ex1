#include <iostream>
using namespace std;
#if 0
int f(int n){
    if(n<1){
        return 0;
    }else{
        return n+f(n-1);
    }
}
#else
int f(int n){
    int val=0;
    int i;
    for(i=1;i<=n;i++){
        val+=i;
    }
    return val;
}
#endif
int main(){
    cout<<"sum = "<<f(1)<<endl;
    return 0;
}
