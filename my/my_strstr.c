/*
** my_strstr.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 10:09:05 2015 Thomas Henon
** Last update Sun Oct 25 06:40:48 2015 Thomas Henon
*/

char	*my_strstr(char *str, char *to_find)
{
  char	*curChar;
  char	i;
  char	length_to_find;

  curChar = str;
  length_to_find = my_strlen(to_find);
  i = 0;
  while (*curChar != '\0')
    {
      if (*curChar == to_find[i])
	{
	  if ((i + 1) == length_to_find)
	    return (curChar - i);
	  i = i + 1;
	}
      else
	i = 0;
      curChar = curChar + 1;
    }
  return (0);
}
