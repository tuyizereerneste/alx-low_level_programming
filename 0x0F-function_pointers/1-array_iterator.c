#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints each array element on a newl
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hexdecimal
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
	return;
	for (n = 0; n < size; n++)
	{
	action(array[n]);
	}
}
