#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        while (str[i])
        {
            if(str[i] == '_')
            {
                char x = str[i + 1] - 32;
                write(1, &x, 1);
                i = i + 2;
                //Zaten sonraki biti yazdığımız için 
                //i'yi 2 artırıyorum ki tekrar yazım olmasın.
            }
            else    
            {
                write(1, &str[i], 1);
                i++;
            }
        }
        
    }
    write(1, "\n", 1);
    return (0);
}