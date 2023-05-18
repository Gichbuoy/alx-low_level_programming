#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at a given
 * index in a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if deletion succeeded,
 *	-1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;
	dlistint_t *previousNode;
	unsigned int position;

	currentNode = *head;

	if (currentNode != NULL)
	{
		while (currentNode->prev != NULL)
			currentNode = currentNode->prev;
	}

	position = 0;

	while (currentNode != NULL)
	{
		if (position == index)
		{
			if (position == 0)
			{
				*head = currentNode->next;

				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previousNode->next = currentNode->next;

				if (currentNode->next != NULL)
					currentNode->next->prev = previousNode;
			}

			free(currentNode);
			return (1);
		}

		previousNode = currentNode;
		currentNode = currentNode->next;
		position++;
	}

	return (-1);
}
