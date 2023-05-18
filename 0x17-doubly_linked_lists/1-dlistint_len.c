#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *head)
{
size_t count = 0;

if (head == NULL)
return count;

/* Traverse to the beginning of the list */
while (head->prev != NULL)
head = head->prev;

/* Count the number of nodes in the list */
while (head != NULL)
{
count++;
head = head->next;
}

return count;
}
