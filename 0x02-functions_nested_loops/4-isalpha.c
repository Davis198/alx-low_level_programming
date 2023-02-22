#include "main.h"

/**
 * _isalpha - check for char alphabet
 * @c: the character to check
 *
 * Return: 1 if char is letter lowercase or uppercase, otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

