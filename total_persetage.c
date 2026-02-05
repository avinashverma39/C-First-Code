#include <stdio.h>
int main()
{  
    // This program calculates the total marks and percentage of five subjects.

    float a, b, c, d, e, total, percentage;
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    total = a + b + c + d + e;
    printf("Total marks: %.2f\n", total);
    percentage = (total / 500) * 100;
    printf("Percentage: %.2f\n", percentage);
    return 0;
    
}