#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int checkscore(string word);

int main(void)
{

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = checkscore(word1);

    int score2 = checkscore(word2);

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
    return 0;
}
int checkscore(string word)
{

    int length = strlen(word);
    int score = 0;
    for (int i = 0; i < length; i++)
    {
        word[i] = toupper(word[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (isupper(word[i]))
        {
            score += points[word[i] - 65];
        }
    }

    return score;
}