#include "search_algos.h"

/**
 * jump_search -  Function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of array to search in
 * @size: Number of elements in array
 * @value: Value to search for in
 *
 * Return: first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t prev = 0;
	size_t current = 0;
	size_t pass = sqrt(size);

	if (array == NULL)
		return (-1);
	while (current < size && array[current] < value)
	{
		prev = current;
		current = current + pass;
		printf("Value checked array[%lu] = [%d]\n",
				prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);
	for (i = prev; i <= current; i++)
	{
		if (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
		}
	}
	return (-1);
}
