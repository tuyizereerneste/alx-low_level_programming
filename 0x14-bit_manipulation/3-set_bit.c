#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 if worked or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n |= (1UL << index);
	return (1);
}
