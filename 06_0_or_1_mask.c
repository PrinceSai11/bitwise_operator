//  Write a program to check whether the kth bit (from the right, starting at 0) of a given number is set (1) or not (0)

#include <stdio.h>

int main()
{
    int k, number;
    printf("enter a number:\n");
    scanf("%d", &number);
    printf("enter the nth digit you want to know from right (starting from 0):\n");
    scanf("%d", &k);

    if (number & (1 << k))
    {
        printf("the nth digit is 1\n");
    }
    else
    {
        printf("the nth digit is 0\n");
    }
    return 0;
}
