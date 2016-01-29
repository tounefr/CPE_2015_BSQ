/*
** my_str_isalpha.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 13:29:45 2015 Thomas Henon
** Last update Thu Nov 12 14:19:20 2015 Thomas Henon
*/

char	in_str(char c, char *str)
{
  char	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (c == str[i])
	return (1);
      i = i + 1;
    }
  return (0);
}

int	my_str_isalpha(char *str)
{
  char	*alpha = "abcdefghijklmnopqrstuvwxyz";
  char	*alpha_up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char	*curChar;

  if (my_strlen(str) == 0)
    return (1);
  curChar = str;
  while (*curChar != '\0')
    {
      if (!in_str(*curChar, alpha) && !in_str(*curChar, alpha_up))
	  return (0);
      curChar = curChar + 1;
    }
  return (1);
}
