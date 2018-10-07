#include <stdio.h>

int main(void)
{
	int total = 3, day = 0, new = 3; 

	while (total <= 1000)
	{
		day++;
		new *= 2;
		printf("Day %d: %d new signatures! \n", day, new);
		total += new;
		printf("Total: %d\n", total);
	}

	return 0;
}
