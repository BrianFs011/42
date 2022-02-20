#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		write (1, &i, 1);
		i--;
	}
}

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	array_char[3];

	array_char[0] = '0';
	while (array_char[0] <= '7')
	{
		array_char[1] = array_char[0] + 1;
		while (array_char[1] <= '8')
		{
			array_char[2] = array_char[1] + 1;
			while (array_char[2] <= '9')
			{
				write(1, array_char, 3);
				if (array_char[0] <= '6')
				{
					write(1, ", ", 2);
				}
				array_char[2]++;
			}
			array_char[1]++;
		}
		array_char[0]++;
	}
}

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 48;
	j = 48;
	while (i <= 57)
	{
		while (j <= 57)
		{
			write(1, &i, 1);
			write(1, &j, 1);
			if (i <= 57 && j < 57)
				write(1, ", ", 2);
			j++;
		}
		if (i != 57 && j != 57)
			write(1, ", ", 2);
		j = 48;
		i++;
	}
}

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int	d1;
	int	d2;

	d1 = nb + 10;
	d2 = nb + 8;
	write(1, &d1, 1);
	write(1, &d2, 1);
}
