#include <stdio.h>
#include <stdlib.h>

  int a[10];


int main(int argc, char** argv){
  int i;
  int x =0;
  for (i = 0; i < 11; i++)
{
    a[i] = i;
	printf("%d",a[i]);
}
    
  printf("x is %d\n", x);
  return 0;
}

