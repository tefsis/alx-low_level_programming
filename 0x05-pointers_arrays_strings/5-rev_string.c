include "main.h"
/**
 *rev_string - that reverses a string
 *@s: string to be checked
 */
void rev_string(char *s)
{
int i, len, temp;  
len = strlen(s);
{        
temp = s[i];  
s[i] = s[len - i - 1];  
s[len - i - 1] = temp;  
}  
}  
