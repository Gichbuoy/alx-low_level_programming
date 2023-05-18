#include "lists.h"

/**
 * free_dlistint - Function that frees a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head != NULL)
	{
		/* Traverse to the beginning of the list */
		while (head->prev != NULL)
			head = head->prev;

		/* Free each node in the list */
		while ((current_node = head) != NULL)
		{
			head = head->next;
			free(current_node);
		}
	}
}
