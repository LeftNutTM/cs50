#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed

    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents2 = -1;
    int cents = -1;
    while
    (cents2 < 0)
    {
        cents2 = get_int("Change owed: ");
    }
    cents = cents2;
    return cents;
}

int calculate_quarters(int cents)
{
    int quartCount = 0;
    for
    (int i = cents; i > 24; i -= 25)//for loop to count quarters
    {
        quartCount++;
    }
    // TODO
    return quartCount;
}

int calculate_dimes(int cents)
{
    int dimeCount = 0;
    for
    (int i = cents; i > 9; i -= 10)// counts dimes
    {
        dimeCount++;
    }
    // TODO
    return dimeCount;
}

int calculate_nickels(int cents)// counts nickels
{
    // TODO
    int nickCount = 0;
    for
    (int i = cents; i > 4; i -= 5)
    {
        nickCount++;
    }
    return nickCount;
}

int calculate_pennies(int cents)// counts pennies
{
    // TODO
    int pennCount = 0;
    for
    (int i = cents; i > 0; i -= 1)
    {
        pennCount++;
    }
    return pennCount;
}
