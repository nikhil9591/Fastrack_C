#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "day2headers.h"
#include <string.h>
int main()
{
    solution_of_4();
    return 0;
}

void solution_of_1()
{
    assert(sum_of_digits(12345)==15);
}

void solution_of_2()
{
   // printf("%d",reverse_of_digits(123456708));
    assert(reverse_of_digits(12345)==54321);
}
void solution_of_3()
{
  //  printf("%d",number_of_digits(12345));
    assert(number_of_digits(12345)==5);
}
void solution_of_4()
{
    //printf("%s",check_palindrome(12223));
    assert(check_palindrome(12221)== "palindrome");
    //assert(check_palindrome(12345)=="not a palindrome");
}
