
int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}

//İki stringin de bitmemiş olması ve eşit olması
//indexin ilerlemesi için gerekli olan koşul!!

