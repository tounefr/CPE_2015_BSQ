/*
** my_strcat.c for  in /home/henon_t/rendu/Piscine_C_J07
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 11:31:35 2015 Thomas Henon
** Last update Tue Oct  6 13:43:34 2015 Thomas Henon
*/

char	*my_strcat(char *dest, char *src)
{
  int	dest_length;
  int	i;

  dest_length = my_strlen(dest);
  i = 0;
  while (src[i] != '\0')
    {
      dest[dest_length + i] = src[i];
      i = i + 1;
    }
  return (dest);
}
