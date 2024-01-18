#include <stdio.h>

#define count 10

/**
 * main - Entry point of our program
 * prints all possible combinations of single-digit numbers
 * You are only allowed to use putchar only and not more than four times
 * Return: Always 0(success)
 * one error -1 is returned
*/

int main(void)
{
	int num;

	for (num = 0; num < count; num++)
	{
		putchar(num + '0');
		if (num != (count - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
