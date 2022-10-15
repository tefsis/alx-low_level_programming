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
for (i = 0; i < n; i++)
{
printf ("%d", va_arg(tes, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(tes);
}
