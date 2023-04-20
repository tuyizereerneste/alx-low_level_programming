#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (i != (n-1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
