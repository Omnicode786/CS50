#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage detail: \n");
        return 1;
    }
    FILE *PDF = fopen(argv[1], "r");
    BYTE buffer[4];
    fread(buffer, 4, 1, PDF);
    if (buffer[0] == 37 && buffer[1] == 80 && buffer[2] == 68 && buffer[3] == 70)
    {
        printf("The provided file is a pdf\n");
        for (int i = 0; i < sizeof(buffer); i++)
        {
            printf("%i", buffer[i]);
            if (i < sizeof(buffer) - 1) // Check if not the last element
            {
                printf(", ");
            }
        }
        printf("\n");
    }

    else
    {
        printf("The provided file is not a pdf\n");
        for (int i = 0; i < sizeof(buffer); i++)
        {
            printf("%i ", buffer[i]);
            if (i < sizeof(buffer) - 1) // Check if not the last element
            {
                printf(", ");
            }
        }
        printf("\n");
    }
}
