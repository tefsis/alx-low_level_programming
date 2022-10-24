#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: Parameter with the head node
 * @n: parameter with the element n in
 * the structure
 *
 * Return: Return the head of the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *first;
first = malloc(sizeof(listint_t));
if (first == NULL)
{
return (NULL);
}
first->next = *head;
first->n = n;
*head = first;
return (first);
}
