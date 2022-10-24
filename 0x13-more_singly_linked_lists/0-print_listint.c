#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 *
 * @h: head pointor
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i;
const listint_t *counter = h;
for (i = 0; counter != NULL; i++)
{
printf("%d\n", counter->n);
counter = counter->next;
}
return (i);
}
