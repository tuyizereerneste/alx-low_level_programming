#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
	if (i == 0)
	{
	printf("%s\n", argv[0]);
	}
	else
	{
	printf("%s\n", argv[i]);
	}
	}
	return (0);
}
