#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc != 2)
        write(1, "\n", 1);
    else
    {
        int i = 0;
        while (argv[1][i] != '\0')
        {
            if (((argv[1][i] >= 110) && (argv[1][i] <= 122))
                || ((argv[1][i] >= 78) && (argv[1][i] <= 90)))
            {
                write(1, (&argv[1][i] - 13), 1);
                i++;
            }
            else if(((argv[1][i] >= 97) && (argv[1][i] <= 109))
                || ((argv[1][i] >= 65) && (argv[1][i] <= 77)))
            {
                write(1, (&argv[1][i]) + 13, 1);
                i++;
            }
            else
            {
                write(1, (&argv[1][i]), 1);
                i++;
            }
        }
        write(1, "\n", 1);
    }
    
    return (0);
}