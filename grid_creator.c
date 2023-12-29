#include <stdio.h>

int getsize(int n);
void print_square(int n);
int main(void)
{
	int n;
	/* Get size of grid from user */
	n = getsize(n);
	/* Print the size of square given by the user*/
	print_square(n);
}

/**
 * getsize - Get the size of the square from the user
 * @n: The size of square grid given by the user
*/
int getsize(int n)
{	
	do
	{
		printf("Enter the size of square grid you want: ");
		scanf("%d", &n);
	} while (n < 1);

	return (n);
}

/**
 * Print_square - Prints square of dimension n * n
 * @n: The size of the square grid
*/
void print_square(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("#");
		}
		printf("\n");
	}
}
