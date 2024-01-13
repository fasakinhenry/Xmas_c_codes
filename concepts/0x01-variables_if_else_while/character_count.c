#include <stdio.h>
/**
 * main - read inputs and counts the number of commas and full stop seen
 * Return: Always 0(success)
 * on erro, -1 is returned
*/

int main(void)
{
	int this_char, comma_count, stop_count = 0;

	comma_count = stop_count = 0;
	this_char = getchar();
	while (this_char != EOF)
	{
		if (this_char == '.')
			stop_count += 1;
		if (this_char == ',')
			comma_count += 1;
		this_char = getchar();
	}
	printf("\n%d commas, %d stops\n", comma_count, stop_count);

	return (0);
}
