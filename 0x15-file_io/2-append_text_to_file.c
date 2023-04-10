#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @str: pointer to string
 *
 * Return: length of string
 */

size_t _strlen(char *str)
{
	size_t y;

	for (y = 0; str[y]; y++)
		;
	return (y);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *         -1 If the file does not exist the user lacks write permissions
 *         Else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
		len = write(o, text_content, _strlen(text_content));
	close(o);
	if (len == -1)
		return (-1);
	return (1);
}

