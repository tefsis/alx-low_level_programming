#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: Parameter with the head node
 * @str: parameter with the element str in
 * the structure
 *
 * Return: Return the address of the new elemen
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *end, *traverse;

end = malloc(sizeof(list_t));
if (end == NULL)
{
return (NULL);
}
end->str = strdup(str);
end->len = strlen(str);
traverse = *head;
while(traverse->next !=NULL)
{
traverse = traverse->next;
}
traverse->next = end;
return (end);
}
