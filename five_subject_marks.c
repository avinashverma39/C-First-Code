// This program calculates the average of five subject marks and determines the grade based on the average.
#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, sum, average;
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total marks: %.2f\n", sum);
    average = sum / 5;
    printf("Average marks: %.2f\n", average);
    return 0;
}