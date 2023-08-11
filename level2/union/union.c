#include <unistd.h>

//Writing function
char putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

//Returns length of an char array
int flen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

//Is already there the char c in str array?
int checker(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

//Updating the array which will be writed
char *list_update(char *str, char c)
{
    if(checker(str, c) == 0)
    {
        int len = flen(str);
        str[len] = c;
    }
}

//We use that copy to the updated list to puppy list
char *strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char *s1 = argv[1];
        char *s2 = argv[2];

        int max = flen(s2);
        char check_list[max];
        int i = 0;
        while (i < max)
        {
            check_list[i] = 0;
            i++;
        }
        //First comparasion(it is same with inter)
        i = 0;
        while (s1[i])
        {
            int c = 0;
            while (s2[c])
            {
                if(s2[i] == s1[c])
                    list_update(check_list, s1[i]);
                c++;
            }
            i++;
        }
        /*******************************************************************/
        int len2 = 0;
        while (check_list[len2] != '\0')
            len2++;
        char pup[len2 + 1];
        strcpy(pup, check_list);
        //We copied the writing array to puppy
        //We use it to do second comparasion 
        i = 0;
        while (s2[i])
        {
            int c = 0;
            while (pup[c])
            {
                if(s2[i] != pup[c])
                    list_update(check_list, s2[i]);
                    c++;
            }
            i++;
        }
        
        putstr(check_list);

    }
    write(1, "\n", 1);
    return (0);
}