char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i   =   0;
    while(s2[i])
    {
        s1[i]=s2[i];
        i++;
    }
    return(s1);
}

#include <stdio.h>
int main(void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	printf("%s\n", ft_strcpy(str1, str2));
}