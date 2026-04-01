// CREATE A PROGRAM TO CALCULATE FACTORIAL OF A GIVEN NUMBER....
#include <stdio.h>
int main()
{
    double fact = 1, n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of the given number is: %d\n", fact);
    return 0;
}