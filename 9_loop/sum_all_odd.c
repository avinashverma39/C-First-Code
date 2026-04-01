// create a program that sums all odd numbers from 1 to n
#include <stdio.h>
int mian()
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
    printf("The sum of all odd numbers from 1 to %d is: %d", n, sum);
}
