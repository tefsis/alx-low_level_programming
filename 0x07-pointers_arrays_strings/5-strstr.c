#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
  int i;
  int j;
  for (i = 0; haystack[i] != '\0'; i++)
    {
      for (j = 0; needle[j] != '\0'; j++)
	{
	  if (haystack[i] != needle[j])
	    {
	      break;
	    }
	  else  if (haystack[i] == needle[j])
	    {
	      needle[j] = haystack[i];
	    }
	}
      return (needle);
    }
  return ('\0');
}
