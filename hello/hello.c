#include <stdio.h>
#include <cs50.h>

int main(void)
{

    string name = get_string("What's your name? "); // get_string function from cs50.h, asks in terminal for name prompt
    printf("Hello, %s\n", name); // prints hello + name user inputted
}