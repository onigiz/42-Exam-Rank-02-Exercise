#include <unistd.h>

int atoi(char *number)
{
    int sum = 0;
    int i = 0;
    while(number[i] == ' ' || number[i] == '\t')
        i++;
    while (number[i] == '-' || number[i] == '+')//Subject kesin pos. olacak demiş çok da gerek yok!
        i++;
    while (number[i] <= '9' && number[i] >= '0')
    {
        sum = (sum * 10) + (number[i] - 48);
        i++;
    }
    return (sum);
}

int slen(char *number)
{
    int i = 0;
    while (number[i])
        i++;
    return (i);
}

void	print_number(int n)
{
	if (n >= 10)
		print_number(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}


int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nb = atoi(av[1]);
        int i = 1;
        int result = 0;
        char c = 0;
        while (i <= 9)
        {
            result = i * nb;
            c = i + 48;
            write(1, &c, 1);
            write(1, " x ", 3);
            print_number(nb);
            write(1, " = ", 3);
            print_number(result);
            write(1, "\n", 1);
            i++;
        }
        
    }
    write(1, "\n", 1)
    return (0);
}