#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the beginning of a listint_t list.
 *
 * @head: Parameter with the head node
 * @n: parameter with the element n in
 * the structure
 *
 * Return: Return the address of the new elemen
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end, *traverse;
end = malloc(sizeof(listint_t));
if (end == NULL)
{
return (NULL);
}
end->n = n;
end->next = NULL;
traverse = *head;
if (*head == NULL)
{
*head = end;
}
else
{
while (traverse->next != NULL)
{
traverse = traverse->next;
}
traverse->next = end;
}
return (end);
}
