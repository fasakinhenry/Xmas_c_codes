#include <stdio.h>

#define MAX_DIGIT 9

/**
 * main - Entry point of the program
 * Prints all the possible combinations of two two-digit numbers
 * You can only use putchar and not more than eight times
 * They should be printed in ascending order
 * Return: Always 0 (success)
 * on error, -1 is returned
 * Author: Henry Fasakin
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= MAX_DIGIT; i++)
	{
		for (j = 0; j <= MAX_DIGIT; j++)
		{
			for (k = i; k <= MAX_DIGIT; k++)
			{
				for (l = (k == i) ? j + 1 : 0; l <= MAX_DIGIT; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');

					if (!(i == MAX_DIGIT && j == MAX_DIGIT && k == MAX_DIGIT && l == MAX_DIGIT))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
