#include "lists.h"

/**
 * get_nodeint_at_index - this will return the node at a certain index in a linked list
 * @head: to the first node in the linked list
 * @index: and index of the node to return
 *
 * Return: take pointer to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
