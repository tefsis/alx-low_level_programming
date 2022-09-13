#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
for (i =0; i <= 9; i++)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
 _putchar('\n'0);
}
}
