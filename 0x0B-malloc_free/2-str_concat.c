#include "main.h"
#include  <stdlib.h>
#include <stdio.h>
/**
 **str_concat - that concatenates two strings
 *@s1: content on s1
 *@s2: content on s2
 *Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j = 0, k = 0;
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
concat[j++] = s1[i];
for (i = 0; s2[i]; i++)
concat[j++] = s2[i];
return (concat);
}
