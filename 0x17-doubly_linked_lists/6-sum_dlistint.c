#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data,
 * in a doubly linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int totalSum;

	totalSum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			totalSum += head->n;
			head = head->next;
		}
	}

	return (totalSum);
}
