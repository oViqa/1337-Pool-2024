char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i   =   0;

    while(s2[i])
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]   =   s2[i];
    return(s1);

}
#include <stdio.h>

int main()
{
  char  str1[]  =   "flambino";
  char  str2[] =    "mwah";
  printf("%s\n", ft_strcpy(str1, str2));
}
///

char * strrev(char a[])
{
	int i, j;
	char temp;
	i=0;
  j=strlen(a)-1;
	while (i<j)
  {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;	
    i++;
    j--;
	}	

	/*
	int len = strlen(a);
	for (i=0 ; i<len/2 ; i++) {
		temp = a[i];
		a[i] = a[len-i-1];
		a[len-i-1] = temp;
	}
	*/

	return a;
}