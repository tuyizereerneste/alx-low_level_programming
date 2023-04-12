#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/*
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @str: character
 * Return: 0 when successful
 */

char *_strdup(char *str)
{
	char *c;
	int i;
	int n = 0;

	if (str == 0)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
	return (NULL);
	for (n = 0 ; str[n] ; n++)
	c[n] = str[n];
	return (c);
}
