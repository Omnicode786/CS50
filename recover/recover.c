#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;
#define block 512

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    FILE *memory = fopen(argv[1], "r");
    if (memory == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    BYTE buffer[block];
    char jpgname[8];
    bool foundjpg = false;
    int noofjpg = 0;
    FILE *output = NULL;

    while (fread(buffer, 1, 512, memory) != 0)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            ((buffer[3] & 0xf0) == 0xe0))
        {
            if (foundjpg)
            {
                fclose(output);
            }
            else
            {
                foundjpg = true;
            }
            sprintf(jpgname, "%03i.jpg", noofjpg);
            output = fopen(jpgname, "w");
            if (output == NULL)
            {
                fclose(memory);
                printf("Could not create %s \n", jpgname);
                return 3;
            }
            noofjpg++;
        }
        if (foundjpg)
        {
            fwrite(buffer, block, 1, output);
        }
    }
    fclose(memory);
    if (foundjpg)
    {
        fclose(output);
    }
    return 0;
}
