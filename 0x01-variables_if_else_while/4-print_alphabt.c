#include <stdio.h>

/**
 * main - the main function
 *
 * Return: return 0 when successful
 */

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		if (n != 'q' && n != 'e')
			putchar(n);
	putchar('\n');
	return (0);
}
