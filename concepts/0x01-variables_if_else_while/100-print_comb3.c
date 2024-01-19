#include <stdio.h>

#define MAX_DIGIT 9

/**
 * main- Entry point of our program
 * Prints the possible combination of two digit numbers
 * Putchar can only be used and not more than 5 times
 * two digits must be different
 * Return: Always 0(success)
 * Author: Henry Fasakin
*/

int main(void)
{
	int i, j;

	for(i = 0; i < MAX_DIGIT; i++)
	{
		for (j = i + 1; j <= MAX_DIGIT; j++, putchar(i < 8 || j < 9 ? ' ': '\n'))
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 || j < 9)
				putchar(',');
			
		}
	}
	
	return (0);
}
