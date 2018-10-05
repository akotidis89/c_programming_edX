#include <stdio.h>

int main(void)
{
	int i;
	int howMany = 0;
	int sum = 0;
	int numberRead = 0;
	printf("How many items do you want to add? ");
	scanf("%d", &howMany);
	for (i = 0; i < howMany; i++)
	{
		printf("Please enter a number: ");
		scanf("%d", &numberRead);
		printf("I have read %d from the input terminal\n", numberRead);
		sum += numberRead;
	}
	
	printf("Sum equals %d.\n", sum);

	return 0;
}
