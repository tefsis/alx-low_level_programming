#include "lists.h"
/**
 * pop_listint -  deletes the first node
 * @head: Parameter with the head node
 * Return: Returns nothing
 */
int pop_listint(listint_t **head)
{
listint_t *to_be_deleted;
if (head == NULL)
{
return (0);
}
while ((*head) != NULL)
{
to_be_deleted = (*head);
(*head) = to_be_deleted->next;
free(to_be_deleted);
}
return (0);
}
