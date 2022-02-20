#include <unistd.h>

void ft_print_comb(void);

void ft_print_comb(void)
{
  int i;
	int j;
	int k;

	i = '0';
	j = '1';
	k = '2';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				k++;
        write(1, ", ", 2);
			}
			k = ++j + 1;
		}
		j = ++i ;
	}
}
