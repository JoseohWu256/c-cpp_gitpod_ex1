#include <iostream>
using namespace std;
int main()
{
    int *i,ii;
    ii = 3;
    i = &ii;
    printf("*i = %d\n",*i);
    printf("&ii = %x\n",&ii);
    printf("i = %x\n",i);
    printf("Hello world");
    return 0;
}
