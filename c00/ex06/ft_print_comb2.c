#include <unistd.h>

void ft_print_comb2(void);

void ft_print_comb2(void)
{
  int i;
  int j;
  int k;
  int l;

  i = '0';
  k = '0';
  j = '0';
  l = '0';
  while (i <= '9')
  {
    while (j <= '9')
    {
      while (k <= '9')
      {
        while (l <= '9')
        {
          write(1, &i, 1);
          write(1, &j, 1);
          write(1, " ", 1);
          write(1, &k, 1);
          write(1, &l, 1);
          write(1, ", ", 2);
          l++;
        }
        l = '0';
        k++;
      }
      k = '0';
      j++;
    }
    j = '0';
    i++;
  }
  
}
