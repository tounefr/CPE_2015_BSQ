/*
** my_is_prime.c for  in /home/henon_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 23:31:51 2015 Thomas Henon
** Last update Sun Oct 25 06:35:28 2015 Thomas Henon
*/

int     my_is_prime(int nombre)
{
  int	i;

  i = 2;
  if (nombre == 2 || nombre == 0)
    return (0);
  while (i < nombre)
    {
      if ((nombre % i) == 0)
        return (0);
      i = i + 1;
    }
  return (1);
}
