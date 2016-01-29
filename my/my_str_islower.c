/*
** my_str_islower.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 14:02:45 2015 Thomas Henon
** Last update Mon Oct  5 14:05:10 2015 Thomas Henon
*/

int	my_str_islower(char *str)
{
  char	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= 'a' && str[i] <= 'z'))
	return (0);
      i = i + 1;
    }
  return (1);
}
