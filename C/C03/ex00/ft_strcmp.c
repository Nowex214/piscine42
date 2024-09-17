#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(0);
}
/*
int main()
{
    char    *str1 = "Hello World";
    char    *str2 = "Helli World";

    int     result;

    result = ft_strcmp(str1,str2);
    printf("comparaison de %s et %s : %d\n",str1,str2,result);
    return 0;
}
*/