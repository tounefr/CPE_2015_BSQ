/*
** my_power_rec.c for  in /home/henon_t/rendu/Piscine_C_J05
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 08:02:54 2015 Thomas Henon
** Last update Mon Oct  5 08:06:53 2015 Thomas Henon
*/

int	my_power_rec(int nb, int power)
{
  if (power != 1)
    nb = nb * my_power_rec(nb, (power - 1));
  else
    return (nb);
}

