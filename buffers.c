/*
** buffers.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Wed Dec  2 18:15:49 2015 Thomas Henon
** Last update Wed Dec 16 13:15:44 2015 Thomas Henon
*/

#include "bsq.h"

char	new_line_in_buff(char *buffer, int buff_size)
{
  int	i;

  i = 0;
  while (i < buff_size)
    {
      if (buffer[i] == '\n')
	return (1);
      i++;
    }
  return (0);
}

void	flush_buffer(char *buffer, int buff_size)
{
  int	i;

  i = 0;
  while (i < buff_size)
    {
      buffer[i] = 0;
      i++;
    }
}

int		total_buffers_size(struct s_buffers *buffers)
{
  unsigned int	total_size;

  total_size = 0;
  while (buffers != 0)
    {
      total_size += buffers->buffer_size;
      buffers = buffers->next;
    }
  return (total_size);
}
