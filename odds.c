/* Print all odd numbers between zero and user-defined number. */

#include <stdio.h>

int main(void)
{
	int num, i;

	printf("Please enter a positive integer number: ");
	scanf("%d", &num);

	if (num >= 0)
	{
		printf("The odd numbers between 0 and %d are: \n", num);

		for (i = 0; i < num; i++)
		{
			if (i % 2 == 1 )
			{
				printf("%d ", i);
			}
		}

		printf("\n");
	}
	else
	{
		printf("Please restart and enter a positive number.\n");
	}
	
	return 0;
}
