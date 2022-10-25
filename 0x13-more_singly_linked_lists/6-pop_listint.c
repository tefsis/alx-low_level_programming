#include "lists.h"
/**
 * pop_listint -  deletes the first node
 * @head: Parameter with the head node
 * Return: Returns nothing
 */
int pop_listint(listint_t **head)
{
listint_t *to_be_deleted;
int n;
if (head == NULL)
{
return (0);
to_be_deleted = (*head);
}
while ((*head) != NULL)
{
n = to_be_deleted->n;
(*head) = to_be_deleted->next;
free(to_be_deleted);
}
return (n);
}
