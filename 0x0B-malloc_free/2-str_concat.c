#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: the first string
 * @s2: the string to add to @s1
 *
 * Return: a pointer that points to a newly allocated space which
 * contains the contents of @s1, followed by the contents of @s2,
 * and null terminated. Should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, k, l = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
k = j + i;
concat = malloc(sizeof(char) * (k + 1));
if (concat == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
concat[i] = s1[i];
l++;
}
for (j = 0; s2[j] != '\0'; j++)
{
concat[l] = s2[j];
l++;
}
return (concat);
}
