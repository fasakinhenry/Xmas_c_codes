#include <stdio.h>

#define MAX_DIGIT 9

/**
 * main - Entry point
 * Prints all possible different combination of three digit numbers
 * You can only use putchar and not more than six times
 * Return: Always 0(success)
 * on error -1 is returned
 * Author: Henry Fasakin
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < MAX_DIGIT - 1; i++)
	{
		for (j = i + 1; j < MAX_DIGIT; j++)
		{
			for (k = j + 1; k <= MAX_DIGIT; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
