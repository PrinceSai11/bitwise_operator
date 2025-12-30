// Write a program to toggle (flip) the kth bit of a given number

#include <stdio.h>

int main()
{
    int k, number;
    printf("enter a number:\n");
    scanf("%d", &number);
    printf("enter the kth bit you want to toggle (starting from 0):\n");
    scanf("%d", &k);

    number = number ^ (1 << k);
    printf("the number after toggle is %d\n", number);

    return 0;
}