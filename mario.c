/**
 * mario.c
 * 
 * Timofey Makhlay
 * 
 * timofey.makhlay@aupschool.org
 * 
 * This code creates a digital structure made out of hashtags. The only variable that the user can insert in the construction is the height.
 * 
 */
 
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Setting of all the variables.
    int i = 1;
    int height = 0;
    char hashtag[2]= "#";
    char blank[2]= " ";
    int b = 0;
    int a = 0;

    
    //This while loop sets the requiriments for the user's input.
    do
    {
        printf("Number between 0 and 23: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    int height2 = height;
//for loop that will generate the proper size in width based on the height.
    for (i = 0; i <= height-1; i++)
    {
        for (a = height2-2-b; a >= 0; a--)
        {
            printf("%s", blank);
        }
        
        for (b = 0; b <= i; b++)
        {
            printf("%s", hashtag);
        }
        printf("%s\n", hashtag);
    }
}