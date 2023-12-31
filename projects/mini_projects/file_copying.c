#include <stdio.h>

/**
 * main - This is a program that copies its input to output,
 * one character at a time
 * Return: Always 0 (success)
 * on error, -1 is returned
*/

int main(void)
{
	int c;

	/* Check if end of file is reached */
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return (0);
}
