#include <stdio.h>

#define count 10

/**
 * main - Entry point of our program
 * prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Do not use any char variable
 * You can only use putchar and it must be used twice
 * Return: Always 0 (success)
 * on error, -1 is returned
*/

int main(void)
{
	int i;

	for (i = 0; i < count; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
