// PROGRAM TO CHECK NUMBER IS ARMSTRONG OR NOT
#include <stdio.h>
int main()
{

    int num, num2 = 0, temp, digit, power;

    printf("Enter the number: ");
    scanf("%d", &num);
     while(num>0){

        digit = num%10;
        num2 = num2 + digit*digit*digit;
        num = num/10;
     }
    
    if(num2==temp){
        printf("Arm strong number");
    }
    else{
        printf("Not Armstrong number");
    }
    return 0;
}