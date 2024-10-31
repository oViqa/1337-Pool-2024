#include <unistd.h>

int main(int ac, char** av)
{
    int i;

    if( ac == 2)
    {
        while(av[1][i])
        {
            i++;
        }
        i--;
        while ((av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13)) && av[1][i])
        {
            i--;
        }
        int og_i;

        og_i=i;
        while ((!(av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13)) && av[1][i]))
        {
            i--;
        }
        int j;
        j  = i;
        while (j <= og_i && av[1][i])
        {
            write(1, &av[1][j],1);
            j++;
        }
    }
    write(1,"\n",1);
}