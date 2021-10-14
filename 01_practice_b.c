#include <stdio.h>

int main()
{
    int length;
    int bradth;

    printf("What is the length of rectangle\n");
    scanf("%d", &length);

    printf("What is the bradth of rectangle\n");
    scanf("%d", &bradth);

    printf("Area of the rectangle is %d", length * bradth);
    return 0;
}