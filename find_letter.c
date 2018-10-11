/*
 *	Separate a word in half and find if any half contains 't' or 'T'
 */

#include <stdio.h>

int main(void)
{
	char word[50], part1[25], part2[25];
	int i = 0, j = 0, k = 0; 
	int found_part1 = 0, found_part2 = 0;
	int length1 = 0, length2 = 0;

	printf("Please enter a word: ");
	scanf("%s", word);

	while (word[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		for (j = 0; j <= i/2; j++)
		{
			part1[j] = word[j];
		}

		for (j = i/2 + 1; j < i; j++)
		{
			part2[k] = word[j];
			k++;
		}
	}
	else
	{
		for (j = 0; j < i/2; j++)
		{
			part1[j] = word[j];
		}

		for (j = i/2; j < i; j++)
		{
			part2[k] = word[j];
			k++;
		}
	}

	printf("part1 is %s and part2 is %s.\n", part1, part2);

	while (part1[length1] != '\0')
	{
		length1++;
	}

	while (part2[length2] != '\0')
	{
		length2++;
	}

	printf("So, lenght1 is %d and length2 is %d.\n", length1, length2);

	i = 0;
	j = 0;

	while (!found_part1 && !found_part2 && (i < length1 || j < length2))
	{
		if (part1[i] == 't' || part1[i] == 'T')
		{
			found_part1 = 1;
		}
		else
		{
			i++;
		}

		if (part2[j] == 't' || part2[j] == 'T')
		{
			found_part2 = 1;
		}
		else
		{
			j++;
		}
	}

	if (found_part1)
	{
		printf("%d\n", 1);
	}
	else if (found_part2)
	{
		printf("%d\n", 2);
	}
	else
	{
		printf("%d\n", -1);
	}


	return 0;
}
