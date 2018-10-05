#include <stdio.h>

int main(void)
{
    int i, number, grade, sum = 0;
    double dsum;
    printf("Please enter the number of grades: ");
    scanf("%d", &number);    // number of grades to average
    for (i = 0; i < number; i++)
    {
	printf("Please enter a grade: ");
        scanf("%d", &grade);
        sum += grade;
    }
    
    dsum = (double) sum;
    
    printf("The average of the grades is %.2lf\n", dsum / number);
    //printf("%lf", sum);
    return 0;
    
}
