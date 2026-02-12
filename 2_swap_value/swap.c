// Program to swap two values with using a temporary variable
#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    // Swapping the values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping, the first number is: %d\n", num1);
    printf("After swapping, the second number is: %d\n", num2);
    return 0;
}
