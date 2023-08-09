char *ft_strrev(char *str)
{
    int len = 0;
    char pup;
    int i = 0;
    
    while (str[len])
        len++;
    
    while(i < (len / 2))
    {
        pup = str[i];
        str[i] = str[len - i -1];
        str[len - i -1] = pup;
        i++;
    }
    return(str);
}

//in-place demesi önemli.
//Kendi bilgisayarımda seg fault veriyor.
//Diğer örneklerine baktım ve onlar da seg fault verdi.
//Sınava girmeden önce macOS 42'de dene.