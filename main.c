#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "upper_to_lower.h"
#include "area_of_circle.h"
#include "calc_of_interest.h"
#include "temperature.h"
#include "even_odd.h"
#include "leap_year.h"
#include <stdbool.h>
#include "power.h"
int main()
{
   solution_of_7();
    return 0;
}
void solution_of_7(){
int result = power_of_two(1);
printf("result = %d",result);
}
void solution_of_6(){
  bool result = leap_year_test(1900);
  if(result==true)
    printf("leap year");
  else
    printf("not a leap year");
}

void solution_of_5(){
  char str = even_or_odd(5);
  printf("%c",str);
}

void solution_of_4(){
  float result = celcius_to_fahrenheit(50.5),result1 = fahrenheit_to_celcius(50.5);
  printf("%fF, %fC",result,result1);
}
void solution_of_3(){
    float SI, CDI;
    SI=simple_interest(10000,6,6.11);
    CDI=compund_interest(10000,1,10,10);
    printf("SI=%f, CDI=%f",SI, CDI);
}

void solution_of_2()
{
//float area;
//area = area_of_circle(23);
//printf("%f",area);
    assert(area_of_circle(10)==314);
}

void solution_of_1()
{
    assert(uppercase_to_lowercase('A') == 'a');
    assert(uppercase_to_lowercase('C') == 'c');
    assert(uppercase_to_lowercase('F') == 'f');
    assert(uppercase_to_lowercase('E') == 'e');
    assert(uppercase_to_lowercase('z') == '*');
}
