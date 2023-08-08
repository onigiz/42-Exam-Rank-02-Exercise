#include "do_op.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        
        if(argv[2][0] == '*')
            crosss(x, y);
        else if(argv[2][0] == '-')
            subs(x, y);
        else if(argv[2][0] == '%')
            mods(x, y);
        else if(argv[2][0] == '+')
            sums(x, y);
        else if(argv[2][0] == '/')
            divs(x, y);
        
    }
    else
        write(1, "\n", 1);
    return (0);
}