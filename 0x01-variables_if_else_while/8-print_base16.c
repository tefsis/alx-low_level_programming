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
char chr;
int i;
for (i = 0 ; i < 10; i++)
putchar((i % 10) + '0');
for (chr = 'a'; chr <= 'f'; chr++)
putchar(chr);
putchar('\n');
return (0);
}
