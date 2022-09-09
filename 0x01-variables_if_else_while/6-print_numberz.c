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
int chr;
for (chr = 0; chr < 10; chr++)
putchar((chr % 10) + '0');
putchar('\n');
return (0);
}
