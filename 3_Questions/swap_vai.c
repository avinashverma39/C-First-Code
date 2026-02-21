// swap two variables without using a temporary variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap using arithmetic operations
    a = a + b; // Step 1: a now holds the sum of a and b
    b = a - b; // Step 2: b now holds the original value of a
    a = a - b; // Step 3: a now holds the original value of b

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}