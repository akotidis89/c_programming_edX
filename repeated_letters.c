/*
 *	Enumerate the letters that occur more than once in a word
 */

#include <stdio.h>

int main(void)
{
	char word[50], swap;
	int i, j, length = 0, count = 0;

	printf("Enter a word: ");
	scanf("%s", word);

	while (word[length] != '\0')
	{
		length++;
	}

	// Sorting the letters of the word based on their ASCII code using
	// the bubble sort algorithm
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - (i + 1); j++)
		{
			if (word[j] > word[j + 1])
			{
				swap = word[j];
				word[j] = word[j + 1];
				word[j + 1] = swap;
			}
		}
	}

	printf("\nThis is the same word with sorted letters: %s\n", word);

	for (i = 0; i < length - 1; i++)
	{
		if (word[i] == word[i + 1])
		{
			count++;
		}

		while (word[i] == word[i + 2])
		{
			i++;
		}
	}

	printf("Number of letters occured more than once in the word: ");
	printf("%d\n", count);

	return 0;
}

