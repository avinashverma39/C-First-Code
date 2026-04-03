// Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the LCM
    lcm = (num1 > num2) ? num1 : num2; // Start with the greater number

    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            break; // Found the LCM
        }
        lcm++; // Increment to check the next number
    }

    // Output the LCM
    printf("The Least Common Multiple of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}