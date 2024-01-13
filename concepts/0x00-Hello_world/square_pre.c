#include <stdio.h>

#define square(x) x * x
/**
 * main - demonstrate macro to get the square of numbers
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	int num = 4;
	printf("The square of 4 is: %d\n", square(num));
	return(0);
}
