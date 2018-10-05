#include <stdio.h>

int main(void)
{
	// False 0 0.0
	// True all values that are non-zero (positive or negative)
	int weatherIsGood = 0;

	if (weatherIsGood)
	{
		printf("The weather is good. Hurray!!!\n");
	}
	else
	{
		printf("The weather is bad!\n");
		printf("Too bad, I have to stay home!\n");
	}
	return 0;
}
