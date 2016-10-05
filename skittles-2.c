/**
 * skittles.c
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
    srand(time(NULL));
    //The part above creates a random number that will change over time.
    int skittles = rand() % 1024;
    
    printf("O hai! I'm thinking of a number between 0 and 1023. What is it?\n");
    
    printf("%i\n", skittles);
    //This is a "cheat" for this game. It's here so that the game is possible to complete.
    int guess = GetInt();
    
    while (guess != skittles)
    //Until the guess variable will be equal to the skittles variable, the loop will continue. 
    {
        if (guess<0 || guess>1023)
        {
            printf("You must be joking *facepalm*\n");
            printf("Retry! *cries* (A number between 0-1023!): ");
            guess = GetInt();
        }
        else
        {
            printf("Nope! There are way more Skittles than that. Guess again: ");
        
            guess = GetInt();
        }
    }

    printf("That's right! Nom nom nom.\n");
}//NOM NOM NOM