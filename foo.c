#include <stdio.h>

int main(int argc, char *argv[])
{
	int myint;
	char mychar;
	
	float mynum; 

	long int mylongint;
	double mydouble, mysum;

	myint = 24;
	mychar = 'r';

	printf("myint and mychar are: %d and %c\n", myint, mychar);

	mynum = 24.3;

	printf("mynum = %f\n", mynum);

	printf("size of int = %d\n", sizeof(int));
	printf("size of int = %d\n", sizeof(myint));
	printf("size of char = %d\n", sizeof(char));
	printf("size of char = %d\n", sizeof(mychar));
	printf("size of float = %d\n", sizeof(float));
	printf("size of float = %d\n", sizeof(mynum));
	
	printf("size of int = %d\n", sizeof(long int));
	printf("size of int = %d\n", sizeof(mylongint));

	printf("size of int = %d\n", sizeof(double));
	printf("size of int = %d\n", sizeof(mydouble));
	
	mydouble = 243.25;
	mysum = 3.5 + mydouble;

	printf("mysum = %f\n", mysum);

	myint = 3;
	mysum = 3.2 + myint;

	printf("mysum = %f\n", mysum);

	mysum = 22.4 + 4.0;
	printf("mysum = %f\n", mysum);
	return 0;
}
