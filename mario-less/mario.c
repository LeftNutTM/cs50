#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: "); //ask user for height
    int hashes = 0;

    while
    (height > 8 || height < 1)
    {
        height = get_int("Height: "); //ask user again for height
    }
    int spaces = height - 1;
    for
    (int i = 0; i < height; i++)
    {
        for
        (int k = 0; k < spaces; k++) //this for loop adds the spaces
        {
            printf(" ");
        }
        spaces--;
        hashes++;
        for
        (int j = 0; j < hashes; j++) //this for loop adds the hashes
        {
            printf("#");
        }
        printf("\n");
    }
}