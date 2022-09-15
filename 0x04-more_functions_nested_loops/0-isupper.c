#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks weither 'c' is lower case or not
 *@c: letter being tested
 * Return: Always 1 if 'c' is lower case.
 *returns 0 otherwise.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
