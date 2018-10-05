#include <stdio.h>

int main(void)
{
	int i;
	int numberOfHazelnuts = 0;
	int distanceTraveled = 0;
	for (i = 0; i < 9; i++)
	{
		printf("At %d miles I have %d hazelnuts.\n", distanceTraveled,
numberOfHazelnuts);
		distanceTraveled += 1;
		numberOfHazelnuts += 3;
	}

	return 0;
}
