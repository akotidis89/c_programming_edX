#include <stdio.h>

int main(void)
{
	int age;
	printf("What is your age? ");
	// We use scanf function to read input from keyboard
	// It's like printf formatting so we use format identifier %d and 
	// substitute with the value of age we entered. Be careful to 
	// denote variable age with an ampersand (&age)!!
	scanf("%d", &age);
	printf("You are %d years old!\n", age);

	return 0;
}
