#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_realloc - reallocates a memory block
 *@ptr: pointer to the memory
 *@old_size: bytes of allocated space for ptr
 *@new_size: bytes of new memory block
 *Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *array;
char *oldarray = ptr;
unsigned int i;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
array = malloc(new_size);
return (array);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
array = malloc(new_size);
if (array == NULL)
return (NULL);
for (i = 0; i < old_size; i++)
array[i] = oldarray[i];
free(oldarray);
return (array);
}
