#include <iostream>
using namespace std;
int f(int n){
    int val=0;
    int i;
    for(i=1;i<=n;i++){
        val+=i;
    }
    return val;
}
int main(){
    cout<<"sum = "<<f(5)<<endl;
    return 0;
}
