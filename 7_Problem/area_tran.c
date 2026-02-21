//Create a program to calculate the Area of a Triangle.
#include<stdio.h>
int main()
{
    float b ,h , area ;
    printf("Enter the base of the triangle : ");
    scanf("%f",&b);
    printf("Enter the height of the triangle : ");
    scanf("%f",&h);
    area = (b * h) / 2 ;
    printf("The area of the triangle is : %.2f",area);  
    return 0;
}