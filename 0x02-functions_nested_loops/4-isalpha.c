#include "main.h"
#include <stdio.h>
/**
 *_isalpha - checks weither 'c' is an alphabet or not
 *@c: letter being tested
 * Return: Always 1 if 'c' is an alphabet.
 *returns 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
