#include <stdio.h>

/**
 * main - Entry point of our program
 * Print all the letters of the lowercase alphabet in reverse
 * Putchar can only be used and cannot be used more than twice
 * Return: always 0 (Success)
 * on error, -1 is returned
*/

int main(void)
{
	int letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
