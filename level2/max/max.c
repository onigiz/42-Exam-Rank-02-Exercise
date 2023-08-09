int max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	
	unsigned int result;
	unsigned int i = 0;
	
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];

		i++;
	}
	return result;
}
/*
#include <stdio.h>

int main()
{
    int tab[10] = {1 , 2, 3, 9, 5, 1789, 12, 23, 54, 1};
    printf("max: %d\n", max(tab, 10));
}
*/