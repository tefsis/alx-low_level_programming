#include <stdio.h>
#include <stdlib.h>
/**
 *main - a program that multiplies 2 numbers
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 if True
 */
int main(int argc, char *argv[])
{
int i, j, mul = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;
printf("%d\n", mul);
return (0);
}
