/**
 * Fahrenheit.c
 * 
 * Timofey Makhlay
 * 
 * timofey.makhlay@aupschool.org
 * 
 */
#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("C: ");
    float celsius = GetFloat();
    float math = celsius * 9 / 5 + 32;
    printf("F: %.1f\n", math);

}