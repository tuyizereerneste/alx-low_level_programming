#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
* Return: if seperator is NULL, don't print
* if string is NULL, print (nil) instead
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(ar, char *);
	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (i != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(ar);
}
