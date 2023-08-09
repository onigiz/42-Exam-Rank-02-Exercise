#include <unistd.h>

char *last_word(char *str)
{
    int i = 0;
    int pos = 0;

    while (str[i])
    {
        if((str[i] == 39 || str[i] == 32) 
            && (str[i+1] > 32 && str[i+1] <= 176))
            pos = i;
        i++;
    }
    return(str + pos);
}

char putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] != 32 && str[i] != 9)
            write(1, &str[i], 1);
        i++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *s = last_word(argv[1]);
        putstr(s);
    }
    write(1, "\n", 1);
    return(0);
}


//Stringin içinde space/tab bulduğu konumu tutuyor. Buldukça güncelliyor.
//Güncellemenin gerçekleşmesi için sonraki indexte 32'den büyük printable karakter olması lazım.
//Daha sonra position point edilerek yeni bir str oluşturuluyor.
//Yeni str char 32 veya 9(tab) değilse wrtite() ile yazdırılıyor.