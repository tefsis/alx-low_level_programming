#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the various sizes of data
 *
 *Return: 0 if true
 */
int main(void)
{
unsigned long i = 0;
unsigned long i1 = 1;
unsigned long i2 = 2;
unsigned long k;
k = i1 + i2;
 while (k < 4000000)
   {
     if (k % 2 == 0)
       {
	 i = k + i;
       }
      i1 = i2;
      i2 = k;
       
   }
 printf("%lu\n ", i);
    
  return (0);
}
