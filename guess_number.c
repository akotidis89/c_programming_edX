/* The user enters a number and let another user to guess the number. Each time
 * the user is notified about his input.
 */

#include <stdio.h>

int main(void)
{
	int number, guess, tries = 1;

	printf("Enter the number to be guessed: ");
	scanf("%d", &number);

	printf("Make a guess: ");
	scanf("%d", &guess);

	while (guess != number)
	{
		if (guess > number)
		{
			printf("It is less\n");
		}
		else
		{
			printf("It is more\n");
		}

		tries++;

		printf("Make another guess: ");
		scanf("%d", &guess);
	}

	printf("You guessed correctly.\n");
	printf("Number of tries needed: %d\n", tries);

	return 0;
}
