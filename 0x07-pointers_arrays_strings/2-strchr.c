#include "main.h"

/**
 * _strchr - This is the Entry point
 * @s: first input
 * @c: second input
 * Return:  0 when Success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}
