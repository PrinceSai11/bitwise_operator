/* Write a program to count how many trailing zeros (continuous zeros from the right side) are present
in the binary representation of a given number. */

#include <stdio.h>

int main()
{
    int number, zeroes = 0;
    printf("enter a number:\n");
    scanf("%d", &number);
    int  num = number;

    if (num == 0){
        printf("the number of trailing zeroes will be infinite\n");
        return 0;
    }

    while ((number & 1) != 1)
    {
        zeroes++;
        number = number >> 1;
    }
    printf("the number of trailing zeroes from right in %d is: \n%d\n", num, zeroes);
    return 0;
}
