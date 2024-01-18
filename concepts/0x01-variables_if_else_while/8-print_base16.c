#include <stdio.h>

/**
 * main - Entry point of our program
 * prints all the numbers of base 16 in lowercase, followed by a new line
 * You can only use the putchar function not more than thrice
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	int num, letter;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
