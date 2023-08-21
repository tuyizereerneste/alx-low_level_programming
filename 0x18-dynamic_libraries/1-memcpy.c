#include "main.h"

/**
 * _memcpy - it is a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m;
	int i = n;

	for (m = 0 ; m < i ; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
