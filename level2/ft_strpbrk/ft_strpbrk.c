
int checker(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        int checker = 0;
        while (s2[checker] != '\0')
        {
            if(s1[i] == s2[checker])
                return (i);
            checker++;
        }
        i++;
    }
    return (0);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return(0);
    int start = checker(s1, s2);
    if(start == 0)
        return(0);
    return(s1 + start);
}

//ikinci setten herhangi bir veri bulduğu ilk yerden itibaren birinci set return edilir.
//Veri eşleşmesi olmazsa null return edilir.
//s1 veya s2 null olduğu durumda şu anda null return ediliyor. Ancak orijinal fonksiyon seg fault veriyor!!!

/*
#include <string.h>
#include <stdio.h>

int main()
{
    char *s1 = "Birsu12345onur";
    char *s2 = NULL;
    
    printf("strpbrk: %s\n", strpbrk(s1, s2));
    printf("ft_strpbrk: %s\n", ft_strpbrk(s1, s2));
}
*/