// Create a program that calculates grades based on marks
#include <stdio.h>
int main()
{

    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("Grade: A");
    }
    else if (mark >= 80)
    {
        printf("Grade: B");
    }
    else if (mark >= 70)
    {
        printf("Grade: C");
    }
    else if (mark >= 60)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: F");
    }
}