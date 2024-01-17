#include <stdio.h>

/**
 * main - Entry point of our program
 * Print all sngle digit numbers starting from o to 10
 * followed by a new line
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
