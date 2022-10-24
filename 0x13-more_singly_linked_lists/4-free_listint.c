#include "lists.h"
/**
 * free_listint -  frees a list_t list
 * @head: Parameter with the head node
 * Return: Returns nothing
 */
void free_listint(listint_t *head)
{
listint_t *cleaner;
while (head != NULL)
{
cleaner = head;
head = head->next;
free(cleaner);
}
}
