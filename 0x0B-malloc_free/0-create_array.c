#include "main.h"
#include<stdlib.h>

/**
 * create_array - creates array of size and assign chara c
 * @size: size of array
 * @c: character to assign
 * Description: create array of size size and assign char c to it
 * Return: pointer to array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0 ; i <= size ; i++)
	str[i] = c;
	return (str);
}

