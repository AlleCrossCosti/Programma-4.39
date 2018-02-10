#include <stdio.h>

int main() {
   
   int vettore[4];
   int num = 2;
   int i;
   
   // Scrittura/lettura vettore
   
   for(i=0; i<=3; i++)
   {
   vettore[i] = num;
   num += 2;
   printf("vettore[%d] = %d\n",i, vettore[i]);
   }
   return 0;
   
   }
