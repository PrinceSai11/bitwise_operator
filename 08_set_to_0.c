// Write a program to clear (set to 0) the kth bit of a given number.

#include <stdio.h>

int main()
{
    int k, number;
    printf("enter a number:\n");
    scanf("%d", &number);
    printf("enter the kth bit you want to set 0 (starting from 0):\n");
    scanf("%d", &k);

    if (number & (1 << k))
    {
        number = number ^ (1 << k);
        printf("the number after turning kth digit whih was 1 into 0 is ---> %d \n", number);
    }
    else
    {
        printf("the number will remain same as its nth digit was 0 ---> %d\n", number);
    }

    return 0;
}