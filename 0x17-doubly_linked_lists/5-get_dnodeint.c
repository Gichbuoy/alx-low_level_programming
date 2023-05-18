#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node,
 * of a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the nth node.
 *
 * Return: Pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	/* Traverse to the beginning of the list */
	while (head->prev != NULL)
		head = head->prev;

	/* Traverse the list until the desired index is reached */
	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}

	return (head);
}
