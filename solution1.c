#include "day2headers.h"

int sum_of_digits(int number)
{
    int remainder, sum=0;
    while(number!=0)
    {
        remainder = number%10;
        number = number/10;
        sum = sum + remainder;
    }

    return sum;
}
