#include <stdio.h>

/**
 * main - Entry point of our program
 * Prints all the alphabets in lowercase,
 * followed by uppercase
 * You can only use outchar function 3 times
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	char letter, letter2;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
		putchar(letter2);
	putchar('\n');
	return (0);
}
