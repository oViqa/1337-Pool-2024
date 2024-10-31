#include <unistd.h>
#include <stdio.h>

int main(int ac, char** av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] && (av[1][i] == ' ' || (av[1][i] <= 13 && av[1][i] >= 9)))
        {
            i++;
        }
        while (av[1][i] && av[1][i] != ' ' && !(av[1][i] <= 13 && av[1][i] >= 9))
        {
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
    {
        printf("%s      \n\thello", av[0]);
    }
    return 0;
}