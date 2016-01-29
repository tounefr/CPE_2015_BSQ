/*
** main.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Wed Dec  2 18:24:34 2015 Thomas Henon
** Last update Wed Dec 16 13:05:20 2015 Thomas Henon
*/

#include "bsq.h"

void			bsq(char *file_path)
{
  char			*file_content;
  struct s_buffers	*lines;
  char			**map;
  int			nb_cols;
  int			nb_lines;

  file_content = file_get_contents(file_path);
  lines = get_lines(file_content);
  lines = lines->next;
  map = parse_map(lines);
  nb_lines = nbr_elems_list(lines);
  if (nb_lines == 0)
    fatal_error("Input error\n");
  nb_cols = lines->buffer_size;
  algo(map, nb_lines, nb_cols);
  cross_map(map, nb_lines, nb_cols);
  free_map(map, nb_lines);
}

int	main(int argc, char **argv)
{
  if (argc != 2)
    {
      my_putstr("Usage: ./bsq map\n");
      exit(1);
    }
  bsq(argv[1]);
  return (0);
}
