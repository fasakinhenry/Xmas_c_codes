#include <stdio.h>

#define MAX(x, y) (x > y ? x : y)

/**
 * main - demonstrate a macro to get the largest between two numbers
 * Return: Always 0(success)
 * onn error, -1 is returned
*/

int main(void)
{
	int num1 = 8;
	int num2 = 7;
	printf("The max of %d and %d is %d\n", num1, num2, MAX(num1, num2));
	return(0);
}
