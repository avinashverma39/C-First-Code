// C program to find the  Fibonacci series using loop
#include <stdio.h>
int main()
{

    int num1 = 0, num2 = 1, num3, result;
    printf("Enter the terms of series: ");
    scanf("%d", &result);

    printf("%d %d ", num1, num2); // printing first two number

    for (int i = 1; i <= result - 2; i++)
    {
        num3 = num1 + num2;  // adding first two number and storing in num3
        printf("%d ", num3); // printing the next term of series
        num1 = num2;         // assigning second number to first number
        num2 = num3;         // assigning third number to second number
    }
    printf("The %dth term of Fibonacci series is: %d", result, num3);
    return 0;
}