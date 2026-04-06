// Program to check if a number is prime or not
#include <stdio.h>
int main()
{

    int num, value = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            value = 1;
            break;
        }
    }
    if (value == 0 && num > 1)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }
    return 0;
}