#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints minimum num of coins
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 if True
 */
int main(int argc, char *argv[])
{
int money, i, Ncoins = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
money = atoi(argv[1]);
if (money < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && money >= 0; i++)
{
while (money >= coins[i])
{
money = money  - coins[i];
Ncoins++;
}
}
printf("%d\n", Ncoins);
return (0);
}
