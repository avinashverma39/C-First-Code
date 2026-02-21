//change degree Celsius to Fahrenheit
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in degree Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f degree Celsius is equal to %.2f degree Fahrenheit.", celsius, fahrenheit);
    return 0;
}