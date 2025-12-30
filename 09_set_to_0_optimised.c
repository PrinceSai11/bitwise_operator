// same as question 08 but an optimised version

#include <stdio.h>

int main()
{
    int k, number;
    printf("enter a number:\n");
    scanf("%d", &number);
    printf("enter the kth bit you want to set 0 (starting from 0):\n");
    scanf("%d", &k);

    number = number & ~(1 << k);
    printf("the number after turning the %dth digit into 0 is ---> %d\n", k, number);

    return 0;
}
