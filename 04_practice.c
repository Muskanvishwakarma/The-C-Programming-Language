#include <stdio.h>

int main()
{
    int principal = 100;
    int rate = 10;
    int years = 2;
    int simpleInterest = (principal * rate * years) / 100;
    printf("The value of Simple Interest is %d", simpleInterest);

    return 0;
}