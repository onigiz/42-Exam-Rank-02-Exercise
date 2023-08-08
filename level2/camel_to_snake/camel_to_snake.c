#include <unistd.h>
#include <stdlib.h>

int flen(char *str)
{
    int i = 0;  
    while (str[i])
        i++;
    return (i);
}

char *re_write(char *str, char *str2)
{
    int i = 0;
    int x = 0;
    while (str[i])
    {   
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str2[x] = '_';
            x++;
            str[i] += 32;
        }
        
        str2[x] = str[i];
        i++;
        x++;
    }
    str2[x] = '\0';
    return (str2);
}

int word_counter(char *str)
{
    int i = 0;
    int c = 0;
    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            c++;
        i++;
    }
    return c;
}

char putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int words = word_counter(argv[1]);
        char *handle = (char *)malloc(flen(argv[1]) + words + 1);
        if(!handle)
            return (0);
        handle = re_write(argv[1], handle);
        putstr(handle);
        free(handle);
    }
    write(1, "\n", 1);
    return (0);

}

//Word counter ile kaç kelime olduğunu yani kaç tan "_" karakteri
//ekleneceğini bul. Bunu da kullanarak malloc ile yeterli yer ayır. 
//Yeni hafızaya yazarken '_' ekle ve büyük harfleri küçüğe çevir. 