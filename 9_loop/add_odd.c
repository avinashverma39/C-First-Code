// CREATE PROGRAM TO ADD ODD NUMBERS FROM 1 TO N
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("The sum of odd numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}