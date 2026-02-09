#include <stdio.h>
int main()
{
    // The program to calculate the area and perimeter of rectangel...
    float l, b, area, peri;
    printf("Enter length width %");
    scanf("%f%f", &l, &b);

    printf("Area is: %.2f\n", area = l * b);

    printf("Perrimeter is %.2f\n", peri = 2 * (l + b));
}