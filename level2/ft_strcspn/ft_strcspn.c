#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while (s[i])
    {
        int x = 0;
        while (reject[x])
        {
            if(s[i] == reject[x])
                return (i);
            x++;
        }  
        i++; 
    }
    return (i);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
    char *s = "ABCDEF7891ABC";
    char *num = "k";

    printf("strcspn: %ld\nft_strcspn: %ld\n", strcspn(s, num), ft_strcspn(s, num));
}
*/

//Başlangıçtan itibaren kaç karakterin kabul olmadığını anlayabilirim.
//char *s = "ABSHDAHD6178643";
//char *num = "0123456789";
//ilk listede num'dan herhangi birini bulduğu ilk position return edilir.