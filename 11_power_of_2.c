// Write a program to check whether a given number is a power of 2 or not using bitwise operator.

#include <stdio.h>

int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d", &number);

    if ( number>0 && (number & (number - 1)) == 0 )
    {
        printf("the number %d is a power of 2",number);
    }
    else
    {
        printf("the number %d is not a power of 2",number);
    }

    return 0;
}