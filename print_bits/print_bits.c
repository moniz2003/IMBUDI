#include <unistd.h>

void    print_bits(unsigned char octet)
{
        int numero = 8;
        unsigned char bytes;

        while (numero--)
        {
                bytes = (octet >> numero & 1) + '0';
                write (1, &bytes, 1);
        }
}
