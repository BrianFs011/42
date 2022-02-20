#include <unistd.h>

void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
  int convert;

  if (nb < 0)
  {
    nb *= -1;
    write(1, "-", 1);
  }
  if (nb <= 9)
  {
    convert = nb + '0';
    write(1, &convert, 1);
  }
  else if (nb >= 10 && nb < 100)
  {
    convert = (nb / 10) + '0';
    write(1, &convert, 1);
    convert = (nb % 10) + '0';
    write(1, &convert, 1);
  }
  else
  {
    
  }
}
