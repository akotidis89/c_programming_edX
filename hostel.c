/* Program to evaluate price for customer in a hostel. The price depends on 
 * customer's age and weight. Not allowed to use else if statements.
 */

#include <stdio.h>

int main(void)
{
        int age, weight;
    
	// Input two variables 
        scanf("%d", &age);
        scanf("%d", &weight);
        
        if (age == 60)
        {
            printf("%d\n", 0);
            return 0;
        }
        
        if (age < 10)
        {
            printf("%d\n", 5);
            return 0;
        }
        
        if (weight > 20)
        {
            printf("%d\n", 40);
            return 0;
        }
        
	// Default price if no other condition is met
        printf("%d\n", 30);
        
        return 0;
}
