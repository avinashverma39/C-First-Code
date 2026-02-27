// Create a program to create a simple calculator that uses a "switch case" statement to perform basic arithmetic operations
#include <stdio.h>
// special use in turbo c compiler this header file is used to clear the screen and getch() function is used to hold the output screen until user press any key
#include <conio.h>
int main()
{
    clrscr();
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    char oper;
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &oper);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (oper = '+')
    {
    case '+':
        printf("The sum is: %d\n", num1 + num2);
        break;

    case '-':
        peintf("The difference is: %d\n", num1 - num2);
        break;

    case '*':
        printf("The product is: %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("The quotient is: %d\n", num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    default:
        printf("Invalid operator. Please use +, -, *, or /.\n");

        break;
    }
    return 0;
}