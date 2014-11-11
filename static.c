#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  int i;
  int x =0;
  int a[10];
  for (i = 0; i < 11; i++)
{
    a[i] = i;
	printf("%d",a[i]);
}
    
  printf("x is %d\n", x);
  return 0;
}

