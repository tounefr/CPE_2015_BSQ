/*
** my_strupcase.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 11:45:48 2015 Thomas Henon
** Last update Wed Nov 11 15:25:47 2015 Thomas Henon
*/

char	*my_strlowcase(char *str)
{
  char	*alpha_lower = "abcdefghijklmnopqrstuvwxyz";
  char	alpha_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char	i_str;
  char	i_alpha_upper;

  i_str = 0;
  while (str[i_str] != '\0')
    {
      i_alpha_upper = 0;
      while (alpha_upper[i_alpha_upper] != '\0')
	{
	  if (alpha_upper[i_alpha_upper] == str[i_str])
	      str[i_str] = alpha_lower[i_alpha_upper];
	  i_alpha_upper = i_alpha_upper + 1;
	}
      i_str = i_str + 1;
    }
  return (str);
}
