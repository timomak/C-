/**
 * greedy.c
 * 
 * Timofey Makhlay
 * 
 * timofey.makhlay@aupschool.org
 * 
 */
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)

{
    int quarter = 25;  // constant
    int dime = 10;  // constant
    int nickel = 5; // constant
    int penny = 1;  // constant
    
    int n_quarter = 0; // number of coins, changed in while loop
    int n_dime = 0;
    int n_nickel = 0;
    int n_penny = 0;

    printf("How much is owed: ");
    
    float amount = GetFloat();
    
    if (amount<0) //if the amount is less than zero, the user will be promted to retry
    {
        printf("Retry with a number larger than zero:");
        amount = GetFloat();
    }
    
    int amountCents = amount * 100; // converts inputted value to cents
   
    while (amountCents >= quarter)  // Quarter funtion
    {
        n_quarter +=1;
        amountCents = amountCents - quarter;
    }
    
    while (amountCents >= dime) //Dime function
    {
        n_dime += 1;
        amountCents = amountCents - dime;
    }
    
    while (amountCents >= nickel)   //Nicel function
    {
        n_nickel += 1;
        amountCents = amountCents - nickel;
    }
    
    while (amountCents >= penny)    //Penny function
    {
        n_penny += 1;
        amountCents = amountCents - penny;
    }
    
    printf("Number of quarters: %i\n", n_quarter); //Prints number of coins
    printf("Number of dimes: %i\n", n_dime);
    printf("Number of nickels: %i\n", n_nickel);
    printf("Number of pennies: %i\n", n_penny);
}