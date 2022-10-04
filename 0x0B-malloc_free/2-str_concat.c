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
int i = 0, j = 0, k, l;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
k = i + j;
concat = malloc(sizeof(char) * k + 1);
if (concat == NULL)
return (NULL);
while (l < i)
concat[l] = s1[l];
l++;
while (l <k)
concat[l] = s2[j];
l++;
j++;
return (concat);
}
