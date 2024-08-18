#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;
typedef int16_t BYTE2;

const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }
    FILE *input = fopen(argv[1], "rb");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    FILE *output = fopen(argv[2], "wb");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    float factor = atof(argv[3]);

    BYTE header[HEADER_SIZE];

    fread(header, 1, 44, input);

    fwrite(header, 1, 44, output);

    BYTE2 buffer;

    while (fread(&buffer, sizeof(BYTE2), 1, input))
    {
        buffer *= factor;

        fwrite(&buffer, sizeof(BYTE2), 1, output);
    }
    fclose(input);
    fclose(output);
}
