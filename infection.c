#include <stdio.h>

int main(void)
{
	int total_pop, total_infected = 1, new_infected = 1, day = 1;

	printf("Please enter the total population: ");
	scanf("%d", &total_pop);

	while (total_infected < total_pop)
	{
		new_infected *= 2;
		total_infected += new_infected;
		day++;
	}

	printf("The total population is expected to infect in %d days.\n",
	day);

	return 0;
}
