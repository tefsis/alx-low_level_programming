#include "main.h"
/**
 **cap_string - Capitalizes all first letter in  words
 * @str: The string to be capitalized
 * Return: s the string
 */
char *cap_string(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
  if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' str[i] == ')' || str[i] == '{' || str[i] == '}')
    {
    str[i - 1] -= 32;
    }
    }
  return (str);
 }
