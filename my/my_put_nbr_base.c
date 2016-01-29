/*
** my_put_nbr_base.c for  in /home/thomas/Documents/epitech/mylib/my
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 13:29:14 2015 Thomas Henon
** Last update Mon Nov  9 13:35:04 2015 Thomas Henon
*/

#include "my.h"

int	my_put_nbr_base(int nb, char *base)
{
  int	result;
  int	rest;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  result = nb / my_strlen(base);
  rest = nb % my_strlen(base);
  if (result > 0)
    my_put_nbr_base(result, base);
  my_putchar(base[rest]);
  return (0);
}
