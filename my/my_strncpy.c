/*
** my_strncpy.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 09:32:11 2015 Thomas Henon
** Last update Wed Nov 11 15:26:33 2015 Thomas Henon
*/

char   *my_strncpy(char *dest, char *src, int n)
{
  char	i;
  char	length_dest;

  length_dest = my_strlen(dest);
  i = 0;
  while (i < n)
    {
      if ((i + 1) > length_dest)
	dest[i] = '\0';
      else
	dest[i] = src[i];
      i = i + 1;
    }
}
