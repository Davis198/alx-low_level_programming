#include <stdio.h>

/**
 * main - Prints the alphabet in lower and upper case
 *
 * Return: Always 0
 */
int main(void)
{
        char lc;

        for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	
	return (0);
}
