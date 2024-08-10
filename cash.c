#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);
    int coins = 0;
    int numberofcoins[] = {25, 10, 5, 1};

    for (int i = 0; i < 4; i++)
    {
        while (change >= numberofcoins[i])
        {
            change -= numberofcoins[i];
            coins++;
        }
    }
    printf("%i\n", coins);
}