#include "main.h"

/**
 * append_text_to_file - function that Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file or
 * If filename is NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p;

	int w;

	int len = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, len);
	if (p == -1 || w == -1)
	return (-1);
	close(p);
	return (1);
}
