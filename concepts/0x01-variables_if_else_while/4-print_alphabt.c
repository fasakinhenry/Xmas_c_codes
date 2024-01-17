#include <stdio.h>

/**
 * main -Entry point of our program
 * Prints the alphabet in lowercase excluding the letters 'q' and 'e'
 * Followed by a new line
 * You are only allowed to use putchar not more than twice
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}
