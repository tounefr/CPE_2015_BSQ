/*
** my_square_root.c for  in /home/henon_t/rendu/Piscine_C_J05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 08:19:47 2015 Thomas Henon
** Last update Wed Oct  7 18:12:36 2015 Thomas Henon
*/

int	my_square_root(int nb)
{
  if (nb != 1)
    nb = nb / my_square_root((nb - 1));
  else
    return (nb);
}
