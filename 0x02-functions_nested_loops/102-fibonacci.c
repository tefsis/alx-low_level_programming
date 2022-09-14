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
int i;
int k;
int i1 = 1;
int i2 = 2;
k = i1 + i2;
printf("%d, %d, ", i1, i2);
for (i = 3; i <= 50; ++i)
{
printf("%d, ", k);
i1 = i2;
i2 = k;
k = i1 + i2;
}
printf("\n");
return (0);
}
