// Create a program that computes the sum of the digits of an integer

#include <stdio.h>
int main()
{
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Loop to calculate the sum of digits
    while (number != 0)
    {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }

    printf("The sum of the digits is: %d\n", sum);
    return 0;
}