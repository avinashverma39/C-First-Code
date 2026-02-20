//Integer to Float Conversion.....
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Integer number: ");
    scanf("%d",&a);
    float b = a; //Implicit type conversion from int to float
    printf("The float value is: %f\n",b);
    return 0;
}