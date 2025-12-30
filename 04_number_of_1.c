// Write a program to count how many bits are set to 1 in the binary representation of a given number.

#include <stdio.h>

int main()
{
    int number, digit = 0;
    printf("enter a number:\n");
    scanf("%d", &number);
    while (number != 0)
    {
        if (number & 1)
        {
            digit++;
        }
        number = number >> 1;
    }
    printf("the number of 1 is: \n%d\n", digit);
    return 0;
}
