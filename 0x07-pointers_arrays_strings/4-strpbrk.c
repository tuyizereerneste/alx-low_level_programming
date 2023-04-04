#include "main.h"

/**
 * _strpbrk - function for entry point
 * @s: input
 * @accept: input
 * Return: 0 when Success
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}
	return ('\0');
}
