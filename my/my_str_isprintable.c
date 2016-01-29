/*
** my_str_isprintable.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 14:33:34 2015 Thomas Henon
** Last update Mon Oct  5 14:42:46 2015 Thomas Henon
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	return (0);
      i = i + 1;
    }
  return (1);
}
