// A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.

#include <stdio.h>

void main(){

    int year = 400;

    if  (year%400==0)     printf("\"%d\" is a leap year.",year);
    else if (year%4==0)   printf("\"%d\" year is a leap year.",year);
    else                  printf("\"%d\" is not a leap year.",year);
}
