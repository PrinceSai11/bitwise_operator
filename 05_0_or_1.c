//  Write a program to check whether the kth bit (from the right, starting at 0) of a given number is set (1) or not (0)

#include <stdio.h>

int main()
{
    int k, number;
    printf("enter a number:\n");
    scanf("%d", &number);
    printf("enter the nth digit you want to know from right (starting from 0):\n");
    scanf("%d", &k);

    number = number >> k;

    if (number & 1)
    {
        printf("the %dth digit is 1", k);
    }
    else
    {
        printf("the %dth digit is 0", k);
    }

    return 0;
}
