// PROGRAM TO CHECK NUMBER IS ARMSTRONG OR NOT
#include <stdio.h>
#include <math.h>
int main()
{
    // BY ISING WHILE LOOP
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    // store the number of digits of num in n
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    // calculate the sum of the nth power of its digits
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    // display the result
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}