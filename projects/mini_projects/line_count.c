#include <stdio.h>

int main(void)
{
	int c, new_line;

	new_line = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++new_line;
	printf("%d", new_line);
	return (0);
}
