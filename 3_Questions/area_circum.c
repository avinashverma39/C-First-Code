// claculate area and circumference of a circle
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = (3.14159) * radius * radius;
    circumference = 2 * 3.14159 * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;

}