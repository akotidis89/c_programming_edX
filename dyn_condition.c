#include <stdio.h>

int main(void)
{
	// + - * / % : arithmetic operators
	// < > <= >= != == : comparison operators	
	double a = 5.000000000000000001;   // The two numbers are different, but 
	double b = 5.000000000000000000;   // due to exceeding double precision
	int result;                       // the result is true
	printf("Check: Is a == b?\n");
	result = a == b;
	printf("Result is %d.\n", result);
	if (result)
	{
		printf("TRUE!\n");
	}
	else
	{
		printf("FALSE!\n");
	}

	return 0;
}
