#include "lists.h"
/**
 * print_list -  prints all the elements of a listint_t list.
 *
 * @h: points to the next node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
printf("%u\n", h->n);
h = h->next;
}
return (i);
}
