#include <unistd.h>

int main (int ac, char** av)
{
    if (ac == 2)
    {
        int i;

				int k; 

        i = 0;

        int j;

        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                j = 0;
								k = av[1][i];

								while (j < k-96)
								{
									write (1, &k, 1);
									j++;
								}
            }
						else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                j = 0;
								k = av[1][i];

								while (j < k-64)
								{
									write (1, &k, 1);
									j++;
								}
            }
						else
						{
						k = av[1][i];
							write(1,&k,1);
						}
            i++;
        }
    }
		write(1,"\n",1);
}