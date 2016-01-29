/*
** my_strcpy.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 08:53:10 2015 Thomas Henon
** Last update Mon Oct  5 09:30:13 2015 Thomas Henon
*/

char	*my_strcpy(char *dest, char *src)
{
  char	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
