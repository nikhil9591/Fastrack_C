#include "day2headers.h"

char* check_palindrome(int number)
{
    int remainder, temp=number, new_number=0;

    while(number!=0)
    {
        remainder = number%10;
        number = number/10;
        new_number = new_number*10+remainder;
    }

    if(new_number == temp) return "palindrome";
    else return "not a palindrome";
}
