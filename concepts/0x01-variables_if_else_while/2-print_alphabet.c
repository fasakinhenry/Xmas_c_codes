#include <stdio.h>

/**
 * main - Entry point of our program
 * prints the alphabet in lowercase, followed by a new line.
 * We can only use putchar which is even allowed twice
 * Return: Always success(0)
 * on errror, -1 is returned
*/

int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
