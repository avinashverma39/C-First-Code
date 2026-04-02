// CREATE A PROGRAM TO CALCULATE FACTORIAL OF A GIVEN NUMBER....
#include <stdio.h>
int main()
{
    int fact = 1, n, i = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    // USING FOR LOOP
    //  for (int i = 1; i <= n; i++)
    //  {
    //      fact *= i;
    //  }

    // USING WHILE LOOP
    while (i <= n)
    {
        fact += i;
        i++;
    }
    printf("The factorial of the given number is: %d\n", fact);

    return 0;
}