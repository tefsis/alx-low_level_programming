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
for (i = 0; s1[i] || s2[i]; i++)
k++;
concat = malloc(sizeof(char) * k);
if (concat == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
concat[l++] = s1[i];
for (i = 0; s2[i]; i++)
concat[l++] = s2[i];
return (concat);
}
