#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - that concatenates two string
 *@s1: string one
 *@s2: string two
 *@n: bytes of memory allocated
 *Return: pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
{
n++;
}
j = n;
concat = malloc(sizeof(char) * (j + 1));
if (concat == 0)
return (NULL);
j = 0;
for (i = 0; s1[i]; i++)
{
concat[j++] = s1[i];
}
for (i = 0; s2[i] && i < n; i++)
concat[j++] = s2[i];
concat[j] = '\0';
return (concat);
}
