#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_calloc - allocates memory for an array
 *@nmemb: the number of elements
 *@size: bytes of each array element
 *Return: if nmemb = 0, size = o fails =NULL
 *pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char * array;
unsigned int i;
if (size == 0 || nmemb == 0)
return (NULL);
 array = calloc(nmemb, size);
if (array == 0)
return (NULL);
for (i = 0; i < (size * nmemb); i++)
{
array[i] = 0;
}
return (array);
}
