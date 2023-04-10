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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
