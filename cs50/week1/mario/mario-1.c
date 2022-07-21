#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declaring variables
    int height, row, col, space;
    //do while loop to check the condition if the height matches values between 1 and 8
    do
    {
        height = get_int("Enter the height:");
    }
    while (height < 1 || height > 8);

    // while the condition is true, you initiate a for loop
    // when the row is less than the height, row increments, but value is equal in real because the counting in the for loop starts at 0
    for (row = 0 ; row < height; row++)
    {
        // this formula/pattern can be worked out on paper
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // adds a # every loop
        for (col = 0; col <= row; col++)
        {
            printf("#");
        }
        // new line after the loop end
        printf("\n");
    }
}