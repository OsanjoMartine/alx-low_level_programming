#include "main.h"
#include <stdio.h>

void print_sum_multiples_1024(void)
{
    int i;
    int sum = 0;
    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);
}

int main(void)
{
    print_sum_multiples_1024();

    return (0);
}