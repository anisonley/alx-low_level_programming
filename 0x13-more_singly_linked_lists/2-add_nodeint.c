#include <string.h>
#include "lists.h"

/**
 * add_node - inthe beginning of a linked list add a new node
 * @head: double pointer to the list_t
 * @str: add new string to the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int b = 0;

while (str[b])
b++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->b = b;
new->next = (*head);
(*head) = new;

return (*head);
}
