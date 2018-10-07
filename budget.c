#include <stdio.h>

int main(void)
{
	int entry, sum = 0;

	printf("Please enter the first entry: ");
	scanf("%d", &entry);

	while (entry != -1)
	{
		sum += entry;
		scanf("%d", &entry);
	}

	printf("%d\n", sum);

	return 0;
}
