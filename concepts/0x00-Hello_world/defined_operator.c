#include <stdio.h>

#if !defined(MESSAGE)
	#define MESSAGE "Henry Fasakin made this code"
#endif

/**
 * main - demonstrate defined operator in c
 * Return: always 0 (success)
 * on error, -1 is returned
*/

int main(void)
{
	printf("Here is the message: %s\n", MESSAGE);
	return (0);
}
