#include "lists.h"
/**
 * free_list -  frees a list_t list
 * @head: Parameter with the head node
 * Return: Returns nothing
 */
void free_list(list_t *head)
{
list_t *cleaner;
while (head != NULL)
{
cleaner = head;
head = head->next;
free(cleaner);
}
}
