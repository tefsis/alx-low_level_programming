#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] > '\0'; i++)
{
for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
{
if (haystack[j] != needle[j - i])
{
break;
}
}
if (needle[j - i] == '\0')
{
return (haystack + i);
}
}
return (0);
}
