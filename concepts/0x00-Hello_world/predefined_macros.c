#include <stdio.h>

/**
 * main- contains an example of predefined macros
 * Return: Always 0 (success)
 * on error, -1 is returned
*/

int main(void)
{
	printf("File: %s\n", __FILE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("Line: %d\n", __LINE__);
	printf("ANSI: %d\n", __STDC__);
}
