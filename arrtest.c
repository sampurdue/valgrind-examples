#include <stdio.h>


int main(void) 
 { 
     int b = 10; 
     int a[3]; 
     a[0] = 1; 
     a[1] = 2; 
     a[2] = 3; 
  
     printf("\n b = %d \n",b); 
     a[3] = 12; 
     printf("\n b = %d \n",b); 
  
     return 0; 
 }
