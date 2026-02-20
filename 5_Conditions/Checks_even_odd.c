// Checks if a number is even or odd
#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is an even number.",number);
    }
    else
    {
        printf("%d is an odd number.",number);  
    }
}