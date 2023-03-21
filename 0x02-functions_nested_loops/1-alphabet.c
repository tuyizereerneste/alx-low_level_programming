#include "main.h"

/**
 * main - main fuction
 * print_alphabet: function that prints alphabet in lower case
 * Return: always 0
 */

void print_alphabet(void)
{
	int n;

	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
