#include <string.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while (s[i])
    {   
        int c = 0;
        while (accept[c] || s[i])
        {
            if(s[i] == accept[c])
            {
                i++;
            }
            else    
                return (i);
            c++;
        }
        return (0);
    }
}

/*
#include <stdio.h>

int main()
{
    char *str1 = "ABCDEFG1234";
    char *str2 = "ABCDEF";

    printf("strspn: %ld\n", strspn(str1, str2));
    printf("strcspn: %ld\n", strcspn(str1, str2));
    printf("ft_strspn: %ld\n", ft_strspn(str1, str2));
    
}
*/

//Son return(0) olmasa da çalışıyor ancak ilk while (accept[c]) olarak tek koşul olursa 
//ikinci string "" olarak gönderildiği durumlarda hata veriyor. While koşulu aynıyken
//son return(0) olmasa da olur!!!


// -strspn (accept) başlangıçtan itibaren kaç byte boyunca 
//kabul edilen char var?
// -strcspn (reject) başlangıçtan itibaren kaç byte boyunca
//reddedilen char var?
