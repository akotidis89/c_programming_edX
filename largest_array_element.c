#include <stdio.h>

int main(void)
{
	int ages[10] = {75, 9, 34, 66, 23, 78, 53, 23, 11, 74};
	int i, max = 0;

	for (i = 0; i < 10; i++)
	{
		if (ages[i] > max)
		{
			max = ages[i];
		}
	}

	printf("%d\n", max);
	printf("Age differences with the eldest person:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d:%d\n", ages[i], max - ages[i]);
	}

	return 0;
}
