#include "lists.h"

/**
 * print_dlistint - function that prints all elements of
 * a dlistint_t list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number = 0;

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
