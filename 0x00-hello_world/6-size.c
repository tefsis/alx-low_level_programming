#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i;
  char c;
  long int l;
  long long int li;
  float f;
  printf("size of a char: %zu byte(s)\n",sizeof(c));
  printf("size of an int: %zu byte(s)\n",sizeof(i));
  printf("size of a long int: %zu byte(s)\n",sizeof(l));
  printf("size of a long long int: %zu byte(s)\n",sizeof(li));
  printf("size of a float: %zu byte(s)\n",sizeof(f));
return (0);
}
