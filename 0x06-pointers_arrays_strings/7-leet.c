#include "main.h"
/**
 **leet - that encodes a string into 1337
 *@s: string
 *Return: string
 */
char *leet(char *s)
{
char *r = s;
char a[] = { 'a', 'e', 'o', 't', 'l' };
char b[] = { 4, 3, 0, 7, 1 };
int i = 0;
while (*s != '\0')
{
for (i = 0; i < 5; i++)
{
if (*s == a[i] || *s == a[i] - 32)
*s = b[i] + '0';
}
s++;
}
return (r);
}
