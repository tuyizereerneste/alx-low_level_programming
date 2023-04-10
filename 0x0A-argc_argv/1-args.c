#include<stdio.h>
#include<stdlib.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 when Success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
