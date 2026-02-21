// auto variable is stored in stack memory and is local to the function in which it is declared. It is automatically created when the function is called and destroyed when the function exits.
#include <stdio.h>
void main()
{
    increment();
    increment();
    increment();
}
void increment()
{
    auto int count = 0; // 'auto' is optional in C, as it's the default storage class for local variables
    count++;
    printf("Count: %d\n", count);
}