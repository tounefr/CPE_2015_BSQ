/*
** my_strcapitalize.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 12:07:22 2015 Thomas Henon
** Last update Wed Nov 11 15:22:35 2015 Thomas Henon
*/

char	is_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}

char	*my_strcapitalize(char *str)
{
  char	last_char_space;
  char	i;
  char	str_len;
  char	tmp[2];

  tmp[1] = '\0';
  last_char_space = 0;
  i = 0;
  str_len = my_strlen(str);
  while (i < str_len)
    {
      if (str[i] == ' ' || str[i] == '+')
	  last_char_space = 1;
      else
	{
	  if (is_alpha(str[i]) && (last_char_space || i == 0))
	    my_strupncase(&(str[i]), 1);
	  last_char_space = 0;
	}
      i = i + 1;
    }
  return (0);
}
