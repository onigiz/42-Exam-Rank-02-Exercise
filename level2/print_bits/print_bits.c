#include <unistd.h>

void print_bits(unsigned char octet)
{
    int counter = 8;
    unsigned char x;
    
    while (counter--)
    {
        // Belirli bitin değerini al
        unsigned char bit_value = octet >> counter;
        bit_value = bit_value & 1;
        
        // Bit değerini ASCII karakter koduna dönüştür
        unsigned char bit_char = bit_value + '0';
        
        // Karakteri ekrana yazdır
        write(1, &bit_char, 1);
    }
}