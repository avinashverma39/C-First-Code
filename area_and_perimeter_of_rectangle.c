#include <stdio.h>
int main()
{
    float length, width, area, perimeter;
    printf("Enter length and width %");
    scanf("%f%f", &length, &width);
    printf("Area is : %.2f\n", area = length * width);
    printf("Perimeter is : %.2f", perimeter = 2 * (length + width));
}