#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
0;276;0c * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tmp = (*head);
unsigned int i;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = tmp;
*head = new;
}
for (i = 0; i < (idx - 1); i++)
{
if (tmp == NULL || tmp->next == NULL)
return (NULL);
tmp = tmp->next;
}
new->n = n;
new->next = tmp->next;
tmp->next = new;
return (new);
}
