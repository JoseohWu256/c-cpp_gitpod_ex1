#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,7,98,0,12,35,99,14};
    for(int i;i<sizeof(arr)/sizeof(arr[0]);i++)
        printf("%u\n",arr[i]);
    return 0;
}
