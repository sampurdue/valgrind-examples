#include <stdio.h>
#include <memory.h>


static int foo(void)
 {
     int a = 1;
     char b[32];

     printf("before memset\n");
     memset(b, 0, 64); /* stomps the stack */
     printf("after memset\n");

     return 0;
 }

 int main(int argc, char **argv)
 {
     int x;

     printf("before foo()\n");
     x = foo();
     printf("after foo()\n");
     return 0;
 }
