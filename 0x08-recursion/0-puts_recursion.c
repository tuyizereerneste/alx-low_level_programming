#include "main.h"

/**
 * _puts_recursion - function that prints a string like puts();
 * @s: is an input string
 * Return: 0 when  Success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
