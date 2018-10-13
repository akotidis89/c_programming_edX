/*
 *	C implementation of bubble sorting algorithm
 */

#include <stdio.h>

int main(void)
{
	// Sorting from smallest to largest
	// Our unsorted list
	int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5};
	int n = 10;
	int i, j, swap;

	printf("Unsorted list: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", list[i]);
	}

	printf("\n\n\n");

	for (j = 0; j < n - 1; j++)
	{
		for (i = 0; i < n - (j + 1); i++)
		{
			if (list[i] > list[i + 1])
			{
				swap = list[i];
				list[i] = list[i + 1];
				list[i + 1] = swap;
			}
		}
	}

	printf("Sorted list: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", list[i]);
	}

	printf("\n");

	return 0;
}
