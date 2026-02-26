// Create a program that calculates grades based on marks
#include <stdio.h>
int main()
{

    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("Grade: A\n");
        printf("Excellent! ");
    }
    else if (mark >= 80)
    {
        printf("Grade: B\n");
        printf("Very Good! ");
    }
    else if (mark >= 70)
    {
        printf("Grade: C\n");
        printf("Good");
    }
    else if (mark >= 60)
    {
        printf("Grade: D\n");
        printf("Work Hard");
    }
    else
    {
        printf("Grade: F \n");
        printf("You need to improve your performance. ");
    }
}