#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool check_key(string key);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (!check_key(argv[1]))
    {
        printf("Key must contain 26 unique characters\n");
        return 1;
    }

    string key = argv[1];
    string plaintext = get_string("plaintext: ");
    int length = strlen(plaintext);
    char ciphertext[length + 1];

    for (int i = 0; i < length; i++)
    {
        if (isupper(plaintext[i]))
        {
            ciphertext[i] = key[plaintext[i] - 65];
        }
        else if (islower(plaintext[i]))
        {

            ciphertext[i] = tolower(key[plaintext[i] - 97]);
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[length] = '\0';
    printf("ciphertext: %s\n", ciphertext);
}
bool check_key(string key)
{
    int length = strlen(key);
    if (length != 26)
    {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        key[i] = toupper(key[i]);
    }
    for (int i = 0; i < length; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
        for (int j = i + 1; j < length; j++)
        {
            if (key[i] == key[j])
            {
                return false;
            }
        }
    }
    return true;
}