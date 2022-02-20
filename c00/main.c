#include <stdio.h>
#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"

void ex00()
{
  ft_putchar('C');
}

void ex01()
{
  ft_print_alphabet();
}

void ex02()
{
  ft_print_reverse_alphabet();
}

void ex03()
{
  ft_print_numbers();
}

void ex04()
{
  ft_is_negative(0);
}

void ex05()
{
  ft_print_comb();
}

void ex06()
{
  ft_print_comb2();
}

void ex07()
{
  ft_putnbr(-180);
}

int main(void)
{
  printf("\e[H\e[2J");
  printf("--- EX00 ---\n");
  ex00();
  printf("\n--- EX01 ---\n");
  ex01();
  printf("\n--- EX02 ---\n");
  ex02();
  printf("\n--- EX03 ---\n");
  ex03();
  printf("\n--- EX04 ---\n");
  ex04(5);
  printf("\n--- EX05 ---\n");
  //ex05();
  printf("\n--- EX06 ---\n");
  //ex06();
  printf("\n--- EX07 ---\n");
  ex07();
  printf("\n--- ---- ---\n");
  return (0);
}
