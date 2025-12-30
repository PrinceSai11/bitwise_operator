// Write a program to swap two numbers without using a third variable, by applying the bitwise XOR (^) operator

#include <stdio.h>

int main()
{
    int a, b;
    printf("the value of a\n");
    scanf("%d", &a);
    printf("the value of b\n");
    scanf("%d", &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping\n");
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);

    return 0;
}
