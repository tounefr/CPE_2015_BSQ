/*
** my_isneg.c for  in /home/henon_t/rendu/Piscine_C_J03
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Wed Sep 30 18:25:14 2015 Thomas Henon
** Last update Wed Nov 11 15:19:26 2015 Thomas Henon
*/

int	my_isneg(int n)
{
  if (n >= 0)
    my_putchar('P');
  else
    my_putchar('N');
  return (0);
}
