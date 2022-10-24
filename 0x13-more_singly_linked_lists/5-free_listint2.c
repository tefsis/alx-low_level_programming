#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head: Parameter with the head node
 * Return: Returns nothing
 */
void free_listint2(listint_t **head)
{
listint_t *cleaner;
if (head == NULL)
return;
while ((*head) != NULL)
{
cleaner = (*head);
(*head) = (*head)->next;
free(cleaner);
}
head = NULL;
}
