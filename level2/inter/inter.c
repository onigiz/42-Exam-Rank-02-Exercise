#include <unistd.h>

int fstrlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int chehcker(char x, char *check_list)
{
    int i = 0;
    while (check_list[i])
    {
        if(x == check_list[i])
            return (1);
        i++;
    }
    return (0);
}

void list_adder(char *check_list, char c)
{
    int len = fstrlen(check_list);
    check_list[len] = c;
    check_list[len +1] = '\0';
}

#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        char *check_list;
        int i = 0;
        
        while (argv[1][i])
        {
            printf("Döngü 1\n");
            int c = 0;
            while (argv[2][c])
            {
                
                if(argv[1][i] == argv[2][c])
                {
                    if (chehcker(argv[1][i], check_list) == 0)
                    {
                        list_adder(check_list, argv[1][i]);
                        printf("list: %s", check_list);
                    }
                    write(1, &argv[1][i], 1);
                }
                c++;
            }
            i++;    
        }
        
    }
    write(1, "\n", 1);
    return (0);
}