int ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    if (str[i] == '-')//yalnızca ilk indexte olursa yorumla
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        result *= str_base;
        if (str[i] >= '0' && str[i] <= '9')//int yapıyorum
            result += str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'Z') // SAYILAR + HARFLER setinden aldığım elemanı int yapmak için
            result += str[i] - 55;
        else if (str[i] >= 'a' && str[i] <= 'z')// int yapıyorum 55 veya 87 oluşu ascii table ile alakalı!
            result += str[i] - 87;
        i++;
    }
    return (result * sign);
}
//Şu anda base'yi ve char seti sınırlamıyorum, sınavda testerda 
//16 base sınır olursa revize edilmesi gerekiyor!!!!



/* #include "stdio.h"
int main()
{
    printf("%d\n", ft_atoi_base("1A", 16));
	printf("%d\n", ft_atoi_base("B2", 8));
	printf("%d\n", ft_atoi_base("CA", 10));
	printf("%d\n", ft_atoi_base("DC2", 11)); //121 * 13 + 11 * 12 + 2 = 1707
	printf("%d\n", ft_atoi_base("eZ54", 3)); //27 *14 + 35 * 9 + 5 * 3 + 4 = 712
	printf("%d\n", ft_atoi_base("E", 16));
} */