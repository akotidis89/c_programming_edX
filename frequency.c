#include <stdio.h>

int main(void)
{
	/*
	 *	Define variables
	 *
	 */
	char sentence[101];
	int i = 0, k = 0, array[10];

	/*
	 *	Initialize values of array to 0
	 */
	for (i = 0; i < 10; i++)
	{
		array[i] = 0;
	}

	i = 0;	/* Re-assign value of i to 0 */

	printf("Please enter a sentence: ");

	/*
	 *	Get input including spaces. Due to buffer overflow, it is good
	 *	practice to include size of input after %
	 */
	scanf("%101[^\n]s", sentence);

	while (sentence[i] != '\0')	/* Loop through every character */
	{
		/*
		 * With the second loop, we separate words. We also include
		 * the cases where the string ends with return (\n) or with
		 * null terminator (\0)
		 */
		while (sentence[i + k] != ' ' && sentence[i + k] != '\n' &&
		sentence[i+k] != '\0')
		{
			k++;	/* The counter for each word */
		}
		i += k + 1;

		/*
		 * We assign each element of the array to the corresponding
		 * index/length of words, so everytime a word matches the 
		 * index the value increases by 1
		 */
		array[k]++;

		k = 0;	/* We reinitialize the counter to 0 for next word */
	}

	/*	
	 *	Print the array
	 */
	printf("Length | Words\n");
	printf("--------------\n");

	for (i = 0; i < 10; i++)
	{
		printf("  %d    |  %d  \n", i, array[i]);
	}

	return 0;
}
