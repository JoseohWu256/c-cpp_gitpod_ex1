#include <iostream>
using namespace std;
int main()
{
    int i;
    int stn=45;
    for(i=0;i<stn;i++){
        switch(i%3){
            case 0:
            printf("%d. Hello world, student %d\n",0,stn);
            break;
            case 1:
            printf("%d. Hello world, student %d\n",0,stn);
            break;
            case 2:
            printf("%d. Hello world, student %d\n",0,stn);
            break;
        }
    }
    return 0;
}
