#include <unistd.h>
#include <stdio.h>

//Print function
char *fputstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }    
}

//String len?
int flen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

//Could we write the char on "will be write" list?
int is_there(char *check_list, char c)
{
    int i = 0;
    while (check_list[i])
    {
        if (c == check_list[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

//Current "will be write" list
void write_that(char *check_list, char c)
{
    if(is_there(check_list, c) == 0)
    {
        int len = flen(check_list);
        check_list[len] = c;
    }
}



int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int max_size = flen(argv[2]);

        char check_list[max_size];
        int i = 0;
        while (i < max_size)
        {
            check_list[i] = 0;
            i++;
        }

        i = 0;
        while (argv[1][i])
        {
            int c = 0;
            while (argv[2][c])
            {
                if (argv[1][i] == argv[2][c])
                    write_that(check_list, argv[1][i]);
                c++;
            }
            i++;
        }

        fputstr(check_list);
    }
    write(1, "\n", 1);
    return 0;
}

//check_list'in mainindeki tanımını yaparken sabit sayılı bir dizi atamazsam 
//seg fault oluyor. Malloc kullanımına izin olmadığından böyle bir yöntem kullanıyorum.
//BAşlangıçta tüm diziyi null doldurup daha sonra manipule ediyorum. Zaten başta tüm 
//array null doldurulduğu için sona null eklememe gerek yok!
//write_that fonksiyonu void tanımlanıp arrayde manipulasyon yapıyor sadece.
//Bu fonksiyonla birlikte tekrar tekrar checkliste atama yapmaya gerek yok, onu handle edemedim.