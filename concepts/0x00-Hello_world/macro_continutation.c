#include <stdio.h>

#define message_for(a, b) \
	printf(#a " and " #b" : We love you!\n")

/**
 * main - This code is to describe the preprocessor commands
 * Return: Always 0, success
 * on error, -1 is returned
 * link: https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm
*/

int main(void)
{
	message_for(Henry, Emmanuel);
	return (0);
}
