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
unsigned long i;
unsigned long i1 = 1;
unsigned long i2 = 2;
unsigned long k;
printf("%lu, %lu, ", i1, i2);
for (i = 3; i <50; i++)
{
k = i1 + i2;
printf("%lu", k);
i1 = i2;
i2 = k;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
