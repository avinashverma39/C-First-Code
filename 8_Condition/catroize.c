// Create a program that categorize a person into different age groups
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12)
    {
        printf("You are a child. ");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("You are a teenager. ");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("You are an adult. ");
    }
    else if (age >= 60)
    {
        printf("You are a senior citizen. ");
    }
    return 0;
}