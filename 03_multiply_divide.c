// Write a program to multiply and divide a given number by 2 using the left shift (<<) and right shift (>>) operators.

#include <stdio.h>

int main()
{
    int number;
    printf("enter a number :\n");
    scanf("%d", &number);

    printf("after multiplying by 2 is :\n%d\n", number << 1);
    printf("after division by 2 is :\n%d\n", number >> 1);
    return 0;
}