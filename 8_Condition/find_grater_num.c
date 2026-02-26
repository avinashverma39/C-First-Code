// clacluate geatest number among three numbers
#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter the three number: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("Greater number is : %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Greater number is : %d", num2);
    }
    else
    {
        printf("Greater number is : %d", num3);
    }
}