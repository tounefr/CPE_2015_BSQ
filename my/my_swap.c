/*
** my_swap.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:00:48 2015 Thomas Henon
** Last update Sat Oct  3 08:32:05 2015 Thomas Henon
*/

int	my_swap(int *a, int *b)
{
  int	*a_tmp;

  a_tmp = a;
  a = b;
  b = a_tmp;
  return (0);
}
