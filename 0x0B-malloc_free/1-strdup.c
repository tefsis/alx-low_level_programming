#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_strdup - return a pointer to a new string
 *which is a duplicate og the str
 *@str: string to be chaecked
 *Return: NULL if srt = NULL,pointer if success, NULL
 *if insuffiecent memory
 */
char *_strdup(char *str)
{
char *copy;
int i, j = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
j++;
copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);
for (i = 0; str[i]; i++)
s[i] = str[i];
s[j] = '\0';
return (s);
}
