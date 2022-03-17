#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;
    int month1;
    int day1;
    int year1;

    month = 4;
    day = 01;
    year = 1997;
    month1 = 2;
    day1 = 29;
    year1 = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    printf("Date: %02d/%02d/%04d\n", month1, day1, year1);
    day = convert_day(month1, day1);
    print_remaining_days(month1, day, year1);

    return (0);
}