#include <stdio.h>

/**
 * main - Prints all combination of sigle digits
 *
 * Return: Always 0
 */
int main(void)
{
        int i, j, k;
    for (i = 0; i < 10; i++) 
    {
        putchar(i + '0');
        if (i < 9) 
	{
            putchar(',');
            putchar(' ');
	}
        for (j = i + 1; j < 10; j++) 
	{
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            putchar(j + '0');
            if (j < 9) 
	    {
                putchar(',');
                putchar(' ');
            }
            for (k = j + 1; k < 10; k++) 
	    {
                putchar(i + '0');
                putchar(',');
                putchar(' ');
                putchar(j + '0');
                putchar(',');
                putchar(' ');
                putchar(k + '0');
                if (k < 9) 
		{
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

	return (0);
}
