unsigned char reverse_bits(unsigned char octet) 
{
    unsigned char result = 0; //0000 0000
    int i = 8;
    
    while (i--) 
    {
        result <<= 1;
        result = result | (octet & 1);
        octet >>= 1;
    }
    
    return result;
}

/*
#include <stdio.h>
int main()
{
    char c = 0b00110111;
    printf("c: %d\n", c);
    printf("reversed: %d\n", reverse_bits(c));
}
*/