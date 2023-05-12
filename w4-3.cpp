#include <stdio.h>
int
main (void)
{
  int r;
  scanf ("%d",&r);
  if (r%4 == 0 and r%100 != 0)
    printf ("是閏年");
  else
    printf ("不是閏年");
  return 0;
}
