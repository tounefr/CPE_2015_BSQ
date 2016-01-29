/*
** my_evil_str.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 18:53:44 2015 Thomas Henon
** Last update Wed Nov 11 15:21:45 2015 Thomas Henon
*/

char	*getLastAddress(char *str)
{
  char	*curAddress;

  curAddress = str;
  while (*curAddress != '\0')
    curAddress = curAddress + 1;
  return (curAddress - 1);
}

char	*my_revstr(char *str)
{
  char	*firstAddress;
  char	*lastAddress;
  char	strlen;
  char	i;
  char	tmp;

  firstAddress = str;
  lastAddress = getLastAddress(str);
  strlen = (lastAddress - firstAddress) + 1;
  i = 0;
  while (i < (strlen / 2))
    {
      tmp = *firstAddress;
      *firstAddress = *lastAddress;
      *lastAddress = tmp;
      firstAddress = firstAddress + 1;
      lastAddress = lastAddress - 1;
      i = i + 1;
    }
  return (str);
}
