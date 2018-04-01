//Mario Problem Set for CS50, 2018, Janet Martin - bulid a right aligned pyramid.

#include <stdio.h>
#include <cs50.h>

int main(void)
{

//declare variable for user input
    int pyramid_height; //pyramid height as specified by user
    int line; //pyramid row
    int hash; //hash characters
    int space; //space characters

    //prompt user to input height
    do
    {
        pyramid_height = get_int("Height: ");
    }
    while ((pyramid_height < 0) || (pyramid_height > 23));

    //print lines
    for (line = 1; line <= pyramid_height; line++)
    {
        //print spaces in each row
        for (space = 0; space < (pyramid_height - line); space++)
        {
            printf(" ");
        }

        //print hashes in each row
        for (hash = 0; hash <= line; hash++)
        {
            printf("#");
        }

        //go to next line
        printf("\n");
    }
}