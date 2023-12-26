#include <stdio.h>

int main(void)
{
	int n;
	do
	{
		printf("Enter the size of square grid you want: ");
		scanf("%d", &n);
		/* code */
	} while (n < 1);

	for (int i = 0; i < n; i++)
	{
		/* code */
		for (int i = 0; i < n; i++)
		{
			/* code */
			printf("#");
		}
		printf("\n");
	}
	
	
}
