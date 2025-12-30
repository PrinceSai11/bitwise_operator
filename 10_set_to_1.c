// Write a program to set (force to 1) the kth bit of a given number.

#include <stdio.h>

int main()
{
    int k, number;
    printf("enter a number:\n");
    scanf("%d", &number);
    printf("enter the kth bit you want to set 1 (starting from 0):\n");
    scanf("%d", &k);

    number = number | (1 << k);
    printf("the number after turning the %dth digit into 1 is ---> %d\n", k, number);

    return 0;
}