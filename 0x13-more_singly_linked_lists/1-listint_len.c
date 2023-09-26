#include "lists.h"

/**
 * listint_len - which returns the number of elements in a linked lists
 * @h: traverse the linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t fig = 0;

	while (h)
	{
		fig++;
		h = h->next;
	}

	return (fig);
}
