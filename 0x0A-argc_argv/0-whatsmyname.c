#include <stdio.h>
#include <main.h>

/**
 * main - Prints the program name, and new line
 * @argc: Argument count/number.
 * @argv: Argument vector , array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc  __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
