#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **array_range - creates an array of integers
 *@min: First value
 *@max: ast value
 *Return: if min>max NULL, if malloc fails-NULL
 *pointer to newly created array
 */
int *array_range(int min, int max)
{
int *array, i, n;
if (min > max)
return (NULL);
n = max - min;
array = malloc(sizeof(int) * (n + 1));
if (array == NULL)
return (NULL);
for (i = 0; i < n; i++)
array[i] = min++;
return (array);
}
