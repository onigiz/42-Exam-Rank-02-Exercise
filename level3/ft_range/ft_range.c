#include <stdlib.h>

int abst(int x, int y)
{
    if (x - y < 0)
        return (y - x);
    else
        return (x - y);
}

int *ft_range(int start, int end)
{
    int size = abst(start, end) + 1;
    int *arr = malloc(sizeof(int) * size);
    int i = 0;
    if (end > start)
    {
        while (start <= end)
        {
            arr[i] = start;
            start++;
            i++;    
        }
    }
    else
    {
        //Conatining diyor ancak örnek büyükten küçüğe 
        //olduğu için düzenleme yaptım bu while'da.
        //Sııkıntı çıkmıyorsa ilk while artış azalışları değiştirilerek kullanılabilir.
        i = size -1;
        while (end <= start)
        {
            
            arr[i] = end;
            end++;
            i--;    
        }
    }

    return (arr);
}


/* 
#include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;
    int start = atoi(av[1]);
    int end = atoi(av[2]);
    int len = abst(start, end) + 1;
    printf("Array size: %d\n\n", len);
    int *arr = ft_range(start, end);
    int i = 0;
    while (i < len)
    {
        printf("%d. item of list: %d\n", (i + 1), arr[i]);
        i++;
    }
    return 0;
    
} */