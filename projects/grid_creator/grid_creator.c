#include <stdio.h>

int getsize(int n);
void print_square(int n);
/**
 * main - The entry point of our program
 * This program prints a square grid with # symbol
 * The number of grid is determined by the user
 * Return: Always 0 (success)
 * On error, -1 is returned
*/
int main(void)
{
	int n = 0;
	/* Get size of grid from user */
	n = getsize(n);
	/* Print the size of square given by the user*/
	print_square(n);

	return (0);
}

/**
 * getsize - Get the size of the square from the user
 * @n: The size of square grid given by the user
 * Return: The size of the square grid givven by user
*/
int getsize(int n)
{
	do {
		printf("Enter the size of square grid you want: ");
		scanf("%d", &n);
	} while (n < 1);

	return (n);
}

/**
 * print_square - Prints square of dimension n * n
 * @n: The size of the square grid
*/
void print_square(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		for (; i < n; i++)
		{
			printf("#");
		}
		printf("\n");
	}
}
