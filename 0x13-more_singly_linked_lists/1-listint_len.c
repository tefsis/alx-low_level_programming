#include "lists.h"
/**
 * listint_len -returns number of elements of a list_t list.
 *
 * @h: points to the next node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
