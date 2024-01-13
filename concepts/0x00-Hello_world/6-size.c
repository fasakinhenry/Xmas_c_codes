#include <stdio.h>

/**
 * main- prints size of various types on computer it is compiled & run on.
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return(0);
}
