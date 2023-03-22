#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char m;
	int n = 0;

	while (n <= 9)
	{
		for (m = 'a' ; m <= 'z' ; m++)
		{
			_putchar(m);
		}
			_putchar('\n');
			n++;
	}
}
