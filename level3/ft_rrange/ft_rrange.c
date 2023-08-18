#include <stdlib.h>

int abst(int start, int end)
{
    if (start <= end)
        return (end - start);
    else    
        return (start - end);        
}

int *ft_rrange(int start, int end)
{
    int size = abst(start, end) + 1;
    int *arr = malloc(sizeof(int) * size);
    int i = 0;
    if (start <= end)
    {   
        i = size - 1;
        while (start <= end)
        {
            arr[i] = start;
            start++;;
            i--;
        }
    }
    else//end < start  
    {
        while (end <= start)
        {
            arr[i] = end;
            end++;
            i++;
        }
        
    }
    return(arr);
}


/* #include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;

    int start = atoi(av[1]);
    int end = atoi(av[2]);
    int *arr = ft_rrange(start, end);

    int len = abst(end, start) + 1;
    int i = 0;
    while (i < len)
    {
        printf("%d. item of array: %d\n", (i + 1), arr[i]);
        i++;
    }
    return 0;
    
} */