#include "main.h"

/**
 * clear_bit - function that sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 if it works or  -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n &= ~(1UL << index);
	return (1);
}
