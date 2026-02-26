// Create a program to create a simple calculator that uses a "if eles" statement to perform basic arithmetic operations

#include <stdio.h>
int main()
{
    int number1, number2;
    ;
    printf("Enter the first number: ");
    scanf("%d", &number1);

    char opreator;
    printf("Enter the opreator (+, -, *, /): ");
    scanf(" %c", &opreator);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    if (opreator == '+')
    {
        printf("The sum is: %d\n", number1 + number2);
    }
    else if (opreator = '-')
    {
        printf("The difference is: %d\n");
    }
    else if (opreator == '*')
    {
        printf("The product is: %d\n", number1 * number2);
    }
    else if (opreator == '/')
    {
        if (number2 != 0)
        {
            printf("The quotient is: %d\n", number1 / number2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }
    return 0;
}