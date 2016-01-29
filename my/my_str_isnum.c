/*
** my_str_isnum.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 13:55:13 2015 Thomas Henon
** Last update Sun Oct 11 18:39:00 2015 Thomas Henon
*/

int	my_str_isnum(char *str)
{
  char	i;

  if (my_strlen(str) == 0)
    return (1);
  i = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  if (i > 0 && str[i - 1] != '-')
	    return (0);
	}
      i = i + 1;
    }
  return (1);
}
