/* Five players roll a dice four times each. The player with the maximum sum
wins */

#include <stdio.h>

int main(void)
{
	int players, times, i, j, max = 0, sums[5], sum = 0, result, index;

	printf("How many players are there in the game? ");
	scanf("%d", &players);

	printf("How many times does each player throw a dice? ");
	scanf("%d", &times);

	for (j = 0; j < players; j++)
	{
		printf("Player%d rolls the dice %d times: ", j + 1, times);
		for (i = 0; i < times; i++)
		{
			scanf("%d", &result);
			sum += result;
		}
		sums[j] = sum;

		sum = 0;
	}

	for (i = 0; i < players; i++)
	{
		if (sums[i] > max)
		{
			max = sums[i];
			index = i;
		}
	}

	printf("So, Player%d with a sum of %d wins!!\n", index + 1, max);

	return 0;
}
