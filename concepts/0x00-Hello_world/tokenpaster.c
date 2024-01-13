#include <stdio.h>

#define tokenpaster(n) printf("token"#n " = %d\n", token##n)

/**
 * main - demonstrates the tokenpaster functionality
 * return: Always 0 (success)
 * one error, -1 is returned
*/

int main(void)
{
	int token34 = 40;
	tokenpaster(34);
	return (0);
}
