#include "day2headers.h"

int number_of_digits(int number)
{
    int count=0;

    while(number!=0)
    {
        number = number/10;

        count++;
    }
    return count;
}
