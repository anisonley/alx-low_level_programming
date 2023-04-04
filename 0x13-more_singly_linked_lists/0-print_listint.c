#include "lists.h"

/**
 * print_listint: prints all the elements of a linked list
 *
 * Return: the element in nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (nodes);
}
