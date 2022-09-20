#include "main.h"
/**
 *puts2 - prints every character of a string starting with the first character
 *@str: string to be checked
 */
void puts2(char *str)
{
int i;
while (str[i] != '\0')
{
  for (i = 0; str[i]; i++)
    {
      _putchar(str[i]);
    
i++;
 }

}
_putchar('\n');
}
