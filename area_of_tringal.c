#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2, num3, s, area;
    printf("Enter the sides of triangle: ");
    scanf("%f%f%f", &num1, &num2, &num3);
    s = (num1 + num2 + num3) / 2;
    area = sqrt(s * (s - num1) * (s - num2) * (s - num3));
    printf("Area of triangle: %f", area);
}