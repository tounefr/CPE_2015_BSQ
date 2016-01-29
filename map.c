/*
** map.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Thu Dec  3 12:41:34 2015 Thomas Henon
** Last update Wed Dec 16 13:34:54 2015 Thomas Henon
*/

#include "bsq.h"

char			**parse_map(struct s_buffers *lines)
{
  int			i;
  int			i2;
  int			nbr_elems;
  char			**map;

  test_lines_length(lines);
  nbr_elems = nbr_elems_list(lines);
  i = 0;
  my_malloc((void*)&map, sizeof(*map) * nbr_elems);
  while (i < nbr_elems)
    {
      my_malloc((void*)&map[i], sizeof(**map) * lines->buffer_size);
      i2 = 0;
      while (i2 < lines->buffer_size)
	{
	  map[i][i2] = lines->buffer[i2];
	  i2++;
	}
      lines = lines->next;
      i++;
    }
  return (map);
}

void	free_map(char **map, int nb_lines)
{
  int	i;

  i = 0;
  while (i < nb_lines)
    {
      free(map[i]);
      i++;
    }
}

void	cross_map(char **map, int nb_lines, int nb_cols)
{
  int	i;
  int	i2;

  i = 0;
  while (i < nb_lines)
    {
      i2 = 0;
      while (i2 < nb_cols)
	my_putchar(map[i][i2++]);
      my_putchar('\n');
      i++;
    }
}
