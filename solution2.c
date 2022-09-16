#include "day2headers.h"
int reverse_of_digits(int number)
{
    int remainder, reverse=0;
    while(number!=0)
    {
        remainder = number%10;

        number = number/10;

        reverse = reverse*10+remainder;
    }
    return reverse;
}
