/*
** my_find_prime_sup.c for  in /home/henon_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 23:39:06 2015 Thomas Henon
** Last update Wed Nov 11 15:14:16 2015 Thomas Henon
*/

int	my_find_prime_sup(int nb)
{
  while (!my_is_prime(nb + 1))
    nb = nb + 1;
  return (nb + 1);
}
