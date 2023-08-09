#include <stdlib.h>

char *ft_strdup(char *src)
{
    
    int len = 0;
    while(src[len])
        len ++;
    
    char *str = malloc((len + 1));
    if(!str)    
        return (0);
    
    int i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char *src = "Birsu";
    printf("strdup: %s\n", strdup(src));
    printf("ft_strdup: %s\n", ft_strdup(src));
}
*/

//Verilen stirngi hafızada açtığı yere yazıyor.