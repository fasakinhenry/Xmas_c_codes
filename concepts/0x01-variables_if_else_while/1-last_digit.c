#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit= n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	
	
	return (0);
}
