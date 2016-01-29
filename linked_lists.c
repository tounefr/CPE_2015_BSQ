/*
** linked_lists.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Wed Dec  2 18:14:20 2015 Thomas Henon
** Last update Mon Dec  7 10:50:55 2015 Thomas Henon
*/

#include "bsq.h"

struct s_buffers	*new_elem(char *buffer, int buffer_size)
{
  struct s_buffers	*s_buff;

  if (0 == (s_buff = malloc(sizeof(struct s_buffers))))
    return (0);
  s_buff->buffer = buffer;
  s_buff->buffer_size = buffer_size;
  s_buff->next = 0;
  return (s_buff);
}

char			append_buffer(struct s_buffers **head,
				      char *buff, int buff_size)
{
  struct s_buffers	*tmp;

  if (*head == 0)
    {
      if (0 == (*head = new_elem(buff, buff_size)))
	return (0);
      return (1);
    }
  tmp = *head;
  while (tmp->next != 0)
    tmp = tmp->next;
  if (0 == (tmp->next = new_elem(buff, buff_size)))
    return (0);
  return (1);
}

int	nbr_elems_list(struct s_buffers *head)
{
  int	i;

  i = 0;
  while (head != 0)
    {
      i++;
      head = head->next;
    }
  return (i);
}

char	*linked_list_to_array(struct s_buffers *buffers)
{
  int	total_size;
  char	*buffer;
  int	i;
  int	i2;

  if (buffers == 0)
    return (0);
  total_size = total_buffers_size(buffers);
  if (0 == (buffer = malloc(total_size + 1)))
    return (0);
  i = 0;
  while (buffers != 0)
    {
      i2 = 0;
      while (i2 < buffers->buffer_size)
	buffer[i++] = buffers->buffer[i2++];
      buffers = buffers->next;
    }
  return (buffer);
}

char			free_buffers(struct s_buffers *head)
{
  struct s_buffers	*tmp;

  while (head != 0)
    {
      tmp = head;
      head = head->next;
      free(tmp);
    }
  return (1);
}
