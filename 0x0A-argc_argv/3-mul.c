#include<stdio.h>
#include<stdlib.h>

/**
 * main - function that multiplies two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 when error and 0 when Success
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul = 1;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    mul = n1 * n2;

    printf("%d\n", mul);
    return 0;
}
