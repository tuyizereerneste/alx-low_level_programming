#include "main.h"

/*
 * _memset - fill a block of memory with a specific value
 * @s: address to be filled
 * @b: is the value
 * @n: is the number of bytes to be changed
 * Return: the array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
