#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdio.h>
/**
 *main - prints the various sizes of data
 *
 *Return: 0 if true
 */
int main(void)
{
int i,j;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i == 9)
continue;
 {
 for (j = i; j <= 9  && j != i; j++)
putchar((j % 10) + '0');
if (j == 9)
continue;
putchar(',');
putchar(' ');
}
 }
 putchar('\n');
return (0);
}
