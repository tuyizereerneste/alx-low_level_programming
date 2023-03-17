#include <stdio.h>

/**
 * main - This is bthe main function
 *
 * Return: return 0 when successful
 */

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		putchar(n);
	for (n = 'A' ; n <= 'Z' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
