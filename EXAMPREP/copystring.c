char	*ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;
    char *og_s1;
    og_s1 = s1;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i]='\0';
    return(s1)
}

//or do this instead :

//char	*ft_strcpy(char *dest,	char	*src)
// {
// 	char	*ret_ptr;

// 	ret_ptr = dest;
// 	while (*src != '\0')
// 	{
// 		*dest = *src;
// 		dest++;
// 		src++;
// 	}
// 	*dest = '\0';
// 	return (ret_ptr);
// }
