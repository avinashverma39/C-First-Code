#include <stdio.h>
int main()
{
    float num1, num2, num3, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf("The average of %.2f, %.2f and %.2f is %.2f", num1, num2, num3, average);
    return 0;

    
}