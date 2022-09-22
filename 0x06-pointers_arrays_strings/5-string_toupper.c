#include "main.h"
/**
 **string_toupper - changes all lowercase letters of a string to uppercase
 *@s: string to be changed
 *Return: the string
 */
char *string_toupper(char *s)
{
int j = 0;
if (s[j] != '\0')
{
if (s[j] > 'a' && s[j] < 'z')
{
s[j] += 32;
}
}
return (s);
}
