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
for (j = 0; j <= 9 && j != i ; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}