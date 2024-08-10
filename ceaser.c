#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int length = strlen(argv[1]);

    for (int i = 0; i < length; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int k = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    int length2 = strlen(plaintext);
    char ciphertext[length2 + 1];
    for (int j = 0; j < length2; j++)
    {
        if (isupper(plaintext[j]))
        {
            ciphertext[j] = (plaintext[j] - 65 + k) % 26 + 65;
        }
        else if (islower(plaintext[j]))
        {
            ciphertext[j] = (plaintext[j] - 97 + k) % 26 + 97;
        }
        else
        {
            ciphertext[j] = plaintext[j];
        }
    }
    ciphertext[length2] = '\0';
    printf("ciphertext: %s\n", ciphertext);
}