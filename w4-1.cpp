#include <stdio.h>
int
main (void)
{
  int r;
  scanf ("%d",&r);
  if (r >= 0){
    printf ("Area: %f\n",r*r*3.14);
    printf("Circumference: %f\n",r*6.28);
  }else {
    printf ("Error: Radius cannot be less than 0");
  }
  return 0;
}
