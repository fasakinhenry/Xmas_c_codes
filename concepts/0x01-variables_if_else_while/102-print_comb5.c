#include <stdio.h>

#define MAX_DIGIT 9

/**
 * main - Entry point of the program
 * Prints all the possible combination of two two-digit numbers
 * You can only use putchar and not more than eight times
 * They should be printed in ascending order
 * Return: Always 0(success)
 * on error, -1 is returned
 * Author: Henry Fasakin
 */

int main(void)
{
	int i, j;

	for (i = 0; i < MAX_DIGIT; i++)
	{
		for (j = 0; j <= MAX_DIGIT; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
