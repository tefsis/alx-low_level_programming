#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints integer arguments with a separator
 *
 * @separator: - thing to print between numbers
 * @n: - number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list tes;
if (separator == NULL || *separator == 0)
return;
va_start(tes, n);
if (n > 0)
printf ("%d", va_arg(tes, int));
for (i = 1; i < n; i++)
printf("%s%d", separator, va_arg(tes, int));
printf("\n");
va_end(tes);
}
