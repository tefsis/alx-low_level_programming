#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 *@s: string to be checked
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s > '\0')
{
_strlen_recursion(s + 1);
i = (_strlen_recursion(s + 1) + 1);
}
return (i);
}  
