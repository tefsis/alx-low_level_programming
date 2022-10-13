#include <stdarg.h>
/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list tes;
if (n == 0)
return (0);
va_start(tes, n);
for (i = 0; i < n; i++)
sum = sum + va_arg(tes, int);
va_end(tes);
return (sum);
}
