#include <stdio.h>

#define MAX_DIGIT 9

/**
 * main - Entry point of our program
 * prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by a comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered the same combination of the numbers 0 and 1
 * You can only use the putchar function (every other function like printf, puts, etc., is forbidden)
 * You can only use putchar eight times maximum in your code.
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
					/* Check if the end of the loop is reached and does not print , and ' ' */
					/* If each iteration is not equal to the highest digit*/
					if (i != MAX_DIGIT || j != (MAX_DIGIT - 1) || k != MAX_DIGIT || l != MAX_DIGIT)
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
