#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: string that holds the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int value = 0;

	if (!b)
	return (0);
	for (i = 0; b[i]; i++)
	{
	if (b[i] < '0' || b[i] > '1')
	return (0);
	value = 2 * value + (b[i] - '0');
	}
	return (value);
}
