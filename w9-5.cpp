#include <iostream>
using namespace std;
int main()
{
    int *i,ii;
    int cc,arr[]={1,2,3,4,7,98,0,12,35,99,14};
    ii = 3;
    i = &ii;
    printf("*i = %d\n",*i);
    printf("&ii = %x\n",&ii);
    printf("i = %x\n",i);
    printf("Hello world\n");
    printf("Number of elements:%lu\n",sizeof(arr)/sizeof(arr[0]));
    ii=sizeof(arr)/sizeof(arr[0]);
    i=arr;
    for(cc=0;cc<ii;cc++){
        printf("%d:%d\n",cc,*i);
        i++;
    }
    printf("\n");
    return 0;
}
