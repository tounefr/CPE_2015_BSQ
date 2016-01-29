/*
** my_put_nbr_base.c for  in /home/thomas/Documents/epitech/mylib/my
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 13:29:14 2015 Thomas Henon
** Last update Tue Nov 10 11:44:02 2015 Thomas Henon
*/

#include "my.h"

int	my_put_unbr_base(unsigned int nb, char *base)
{
  int	result;
  int	rest;

  result = nb / my_strlen(base);
  rest = nb % my_strlen(base);
  if (result > 0)
    my_put_nbr_base(result, base);
  my_putchar(base[rest]);
  return (0);
}
