#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input value
 * @s2: input value
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
int j = 0;
for (j = 0; (s1[j] != '\0' || s2[j] != '\0'); j++)
{
return (s1[j) - s2[j]);
}
return (0);
}
