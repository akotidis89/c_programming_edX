#include <stdio.h>

// Define a function with two parameters x and y. Remember to defind their 
// type too.
int sum(int x, int y)
{
	int compute;
	printf("Starting the computation!\n");
	compute = x + y;
	printf("Finished the computation sucessfully!\n");

	return compute;
}

int main(void)
{
	int a, b;
	int result;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	printf("You entered %d and %d.\n", a, b);

	// Calling the function with arguments a and b that copied in the place
	// of parameters (x and y) in the definition of the function sum.
	result = sum(a, b);
	printf("Result of the sum is %d.\n", result);
	
	return 0;
}
