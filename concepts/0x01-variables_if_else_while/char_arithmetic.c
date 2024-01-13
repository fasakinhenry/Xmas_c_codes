#include <stdio.h>
#include <limits.h>

/**
 * main - Demonstrate char arithmetic using a loop
 * Return: Always 0(success)
 * on error, -1 is returned
*/

int main(void)
{
	char c;
	c = CHAR_MIN;
	while (c != CHAR_MAX)
	{
		printf("%d\n", c);
		c += 1;
	}
	
	return(0);
}
