/*
** file.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Wed Dec  2 18:33:52 2015 Thomas Henon
** Last update Wed Dec 16 13:15:32 2015 Thomas Henon
*/

#include "bsq.h"

int	open_file(char *file_path)
{
  int	fd;

  if (-1 == (fd = open(file_path, O_RDONLY)))
    {
      my_putstr("Cannot open the file\n");
      exit(1);
    }
  return (fd);
}

struct s_buffers	*read_content(int fd)
{
  int			readv;
  char			*buffer;
  struct s_buffers	*buffers;

  buffers = 0;
  my_malloc((void*)&buffer, BUFFER_SIZE);
  while ((readv = read(fd, buffer, BUFFER_SIZE)) &&
	 readv != 0 && readv != -1)
    {
      append_buffer(&buffers, buffer, readv);
      my_malloc((void*)&buffer, BUFFER_SIZE);
    }
  return (buffers);
}

char			*file_get_contents(char *file_path)
{
  int			fd;
  char			*content;
  struct s_buffers	*buffers;

  fd = open_file(file_path);
  buffers = read_content(fd);
  content = linked_list_to_array(buffers);
  free_buffers(buffers);
  return (content);
}
