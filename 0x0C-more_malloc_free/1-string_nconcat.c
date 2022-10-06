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
 unsigned int i = 0;
 unsigned int j = 0;
 unsigned int m;
 unsigned int p;
 unsigned int k = 0;
 unsigned int len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (j > n)
j = n;
len = i + j;
concat = malloc(sizeof(char) * (len + 1));
if (concat == 0)
return (NULL);
len = 0;
for (p = 0; s1[p]; p++)
{
concat[k++] = s1[p];
}
for (m = 0; s2[m] && m < j; m++)
concat[k++] = s2[m];
concat[k] = '\0';
return (concat);
}
