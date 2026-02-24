// Create a program that determines if a number is positive, negative, or zero

#include <stdio.h>
int main()
{

    int num1;
    printf("Enter the any number : ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        printf("Number is positive");
    }
    else if (num1 < 0)
    {
        printf("Number is negative");
    }

    else
    {
        printf("Number is Zero");
    }
}