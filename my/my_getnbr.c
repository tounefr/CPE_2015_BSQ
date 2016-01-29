/*
** my_getnbr.c for  in /home/henon_t/rendu/Piscine_C_J06
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Mon Oct  5 15:37:11 2015 Thomas Henon
** Last update Wed Nov 11 15:18:06 2015 Thomas Henon
*/

char	is_digit(char nbr)
{
  if (nbr >= '0' && nbr <= '9')
    return (1);
  return (0);
}

int	chars_to_int(char *start, char *end)
{
  int	multp;
  int	numb;

  if (!start || !end)
    return (0);
  numb = 0;
  multp = 1;
  while (end >= start)
    {
      numb = numb + ((*end - 48) * multp);
      multp = multp * 10;
      end = end - 1;
    }
  if (*(start - 1) == '-')
    numb = numb * (-1);
  return (numb);
}

int	my_getnbr(char *str)
{
  char	i;
  char	*ptr_int_start;
  char	*ptr_int_end;

  ptr_int_start = 0;
  ptr_int_end = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (is_digit(str[i]))
	{
	  if (!ptr_int_start)
	    ptr_int_start = &(str[i]);
	  if ((str[i + 1] == '\0' || !is_digit(str[i + 1])) && !ptr_int_end)
	    ptr_int_end = &(str[i]);
	}
      else if (!ptr_int_start && !ptr_int_end)
	{
	  ptr_int_start = 0;
	  ptr_int_end = 0;
	}
      i = i + 1;
    }
  return (chars_to_int(ptr_int_start, ptr_int_end));
}
