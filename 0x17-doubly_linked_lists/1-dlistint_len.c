#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
