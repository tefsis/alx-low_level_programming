#include "main.h"
/**
 *_strlen - returns the lengh of a string
 *@s: string to be checked
 *Return: length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}
