#include <stdio.h>
#include <unistd.h>

/**
 * main - print a string using write
 * Return: Always 0(success)
 * on error -1 is returned
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(2);
}
