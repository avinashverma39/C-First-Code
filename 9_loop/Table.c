// Develop a program that prints the multiplication table for a given number.
#include <stdio.h>

int main()
{
    // USING FOR LOOP....................

    // int num1;
    // printf("Enter a number to print its multiplication table: ");
    // scanf("%d", &num1);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d x %d = %d\n", num1, i, num1 * i);
    // }

    // USING WHILE LOOP..........

    // int num, number = 1;

    // printf("Enter a number to print its multiplication table: ");
    // scanf("%d", &num);
    // while (number < 11)
    // {
    //     printf("%d x %d = %d\n", num, number, num * number);
    //     number++;
    // }

    // USING DO-WHILE LOOP............

    int num, number = 1;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    do
    {

        printf("%d x %d = %d\n", num, number, num * number);
        number++;

    } while (number < 11);

    return 0;
}