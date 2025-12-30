// Write a program to check whether a given number is odd or even using the bitwise AND operator.

#include <stdio.h>

int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d", &number);
    if (number & 1)
    {
        printf("odd number\n");
    }
    else
    {
        printf("even number\n");
    }

    return 0;
}