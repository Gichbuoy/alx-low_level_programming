#include "lists.h"
/**
 * listint_len - returns the number of elememnts ina linked list
 * @h: linked list of type list_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
