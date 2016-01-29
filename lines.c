/*
** lines.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Thu Dec  3 12:41:59 2015 Thomas Henon
** Last update Wed Dec 16 13:31:38 2015 Thomas Henon
*/

#include "bsq.h"

char	*get_line(char *file_content, int i1, int i2)
{
  char	*line;
  int	i;

  line = 0;
  i = 0;
  my_malloc((void*)&line, (i2-i1) + 1);
  while (i1 < i2)
    line[i++] = file_content[i1++];
  return (line);
}

struct s_buffers	*get_lines(char *file_content)
{
  int			i;
  int			i2;
  char			*line;
  struct s_buffers	*lines;

  lines = 0;
  i = 0;
  while (file_content[i] != 0)
    {
      i2 = i;
      while (file_content[i2] != '\n')
	i2++;
      if (i != i2)
	{
	  line = get_line(file_content, i, i2);
	  append_buffer(&lines, line, my_strlen(line));
	}
      i = i2 + 1;
    }
  return (lines);
}

void	test_lines_length(struct s_buffers *lines)
{
  while (lines != 0)
    {
      if (lines->next && lines->buffer_size != lines->next->buffer_size)
	{
	  my_putstr("Lines must be the same length !\n");
	  exit(1);
	}
      lines = lines->next;
    }
}
