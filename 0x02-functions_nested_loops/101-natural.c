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
int k = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
k = k + i;
}
}
printf("%d",k);                                                                                          
printf("\n");
return (0);
}
