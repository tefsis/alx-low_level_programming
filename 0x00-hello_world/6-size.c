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
  long int li;
  long long int lli;
  printf("size of int:%zu byte(s)\n",sizeof(i));
  printf("size of char:%zu byte(s)\n",sizeof(c));
  printf("size of long int:%zu byte(s)\n",sizeof(li));
  printf("size of long long int:%zu byte(s)\n",sizeof(lli));
return (0);
}
