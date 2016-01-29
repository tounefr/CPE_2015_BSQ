/*
** my_putstr.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:49:52 2015 Thomas Henon
** Last update Wed Nov 11 15:21:21 2015 Thomas Henon
*/

int	my_putstr(char *str)
{
  char	*cur_char;

  cur_char = str;
  while (*cur_char != '\0')
    {
      my_putchar(*cur_char);
      cur_char = cur_char + 1;
    }
  return (0);
}
