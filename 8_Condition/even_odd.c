// clculate given number is even or odd
#include <stdio.h>
int main()
{
    int num1;

    printf("Enter the any number : ");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}