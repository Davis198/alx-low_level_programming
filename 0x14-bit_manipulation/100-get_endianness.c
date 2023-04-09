#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big-endian
 *         1 If little-endian
 */

int get_endianness(void)
{
	char *b;
	int a = 1;

	b = (char *)&a;

	return (*b);
}
