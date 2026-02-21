// Create a program to calculate Perimeter of a rectangle.
// Perimeter of rectangle ABCD = A+B+C+D
#include<stdio.h>
int main()
{
    float length, width, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is: %.2f", perimeter);
    return 0;
}