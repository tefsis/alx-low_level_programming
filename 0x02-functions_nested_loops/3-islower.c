#include "main.h"
#include <stdio.h>
/**
 *_islower - checks weither 'c' is lower case or not 
 *
 * Return: Always 1 if 'c' is lower case.
 *returns 0 otherwise.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
