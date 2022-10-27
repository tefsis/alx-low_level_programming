#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 *or 0, there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int converted = 0, len;
unsigned int decimal = 1;
int i;
if (b == NULL)
return (0);
len = strlen(b);
for (i = (len - 1); i >= 0 && b != NULL; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
converted = converted + decimal;
decimal = 2 * decimal;
}
return (converted);
}
