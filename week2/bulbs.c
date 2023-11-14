#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("String: ");
    int n = strlen(message);
    int ascii[n];
    int binary[8];

    for(int i = 0; i < n; i++)
    {
        ascii[i] = message[i];
    }

    for(int k = 0; k < n; k++)
    {
        int counter = 7;
        for(int j = 0; j < 8; j++)
        {
            binary[j] = 0;
        }

        while(ascii[k] != 0)
        {
            binary[counter] = ascii[k] % 2;
            ascii[k] = ascii[k] / 2;
            counter--;
        }

        for(int i = 0; i < 8; i++)
        {
            print_bulb(binary[i]);
        }

        printf("\n");
    }


    printf("\n");
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
