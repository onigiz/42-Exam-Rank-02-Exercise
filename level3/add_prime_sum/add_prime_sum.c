#include <unistd.h>

int atoi(char *nb)
{
    int number = 0;
    int i = 0;
    while (nb[i])
    {
        if (nb[i] == ' ' || nb[i] == '\t') 
            i++;
        else if (nb[i] <= '9' && nb[i] >= '0')
        {
            number = (number * 10) + (nb[i] - 48);
            i++;
        }
        else    
            return (0);
    }
    return (number);    
}

int is_prime(int i)
{
    int c = 3;
    if (i <= 1)
        return (0);
    else if (i == 2)
        return (1);
    else if ((i % 2 == 0) && (i > 2))
        return (0);
    else
    {
        while ((c <= i/2) && (i != 2))
        {
            if (i % c == 0)
                return 0;
            c++;
        }
        return (1);
    }
}

int sum_preprimes(int prime)
{
    int c = 2;
    int sum = 0;
    while (c <= prime)
    {
        if (is_prime(c) == 1)
        {
            sum += c;
            c++;
        }
        else 
            c++;        
    }
    return (sum);
}

void	print_sum(int n)
{
	if (n >= 10)
		print_sum(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}


#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int sum = 0;
        int handle = atoi(argv[1]);
        if (is_prime(handle) == 1)
        { 
            sum = sum_preprimes(handle);
        }
        printf("printf: %d\n", sum);
        print_sum(sum);
    }
    write(1, "\n", 1);
    return (0);
}