#include <stdio.h>

int main(void)
{
    int i, num_of_robots, enginePower, resistance, weight, height, power;
    int sum = 0;
    printf("Please insert the number of robots: ");
    scanf("%d", &num_of_robots);
    for (i = 0; i < num_of_robots; i++)
    {
	printf("Please insert specifications: ");
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        power = (enginePower + resistance) * (weight - height);
        sum += power;
    }
    
    printf("The total power of the robots is %d\n", sum);
    
    return 0;
}
