#include <studio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On eeror, -1 is return and error is appriopriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
