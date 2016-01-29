/*
** bsq.h for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Wed Dec  2 18:18:12 2015 Thomas Henon
** Last update Wed Dec 16 13:35:06 2015 Thomas Henon
*/

#ifndef __BSQ_H__
# define __BSQ_H__

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "my.h"

# define BUFFER_SIZE 1024

struct			s_buffers
{
  char			*buffer;
  int			buffer_size;
  struct s_buffers	*next;
};

struct			s_pos
{
  int			x;
  int			y;
};

struct			s_bsq
{
  char			**map;
  int			x;
  int			y;
  int			nb_cols;
  int			nb_lines;
  int			nb_squares;
  struct s_pos		square_pos;
};

/*
** main.c
*/
void	bsq(char *file_path);
int	main(int argc, char **argv);

/*
** linked_lists.c
*/
struct s_buffers	*new_elem(char *buffer, int buffer_size);
int			nbr_elems_list(struct s_buffers *head);
char			*linked_list_to_array(struct s_buffers *buffers);
char			free_buffers(struct s_buffers *head);
char			append_buffer(struct s_buffers **, char *, int);

/*
** buffers.c
*/
char	new_line_in_buff(char *buffer, int buff_size);
void	flush_buffer(char *buffer, int buff_size);
int	total_buffers_size(struct s_buffers *buffers);

/*
** file.c
*/
char			*file_get_contents(char *file_path);
struct s_buffers	*read_content(int fd);
int			open_file(char *file_path);

/*
** util.c
*/
void		my_putstr_error(char *str);
void		my_malloc(void **ptr, int size);
void		fatal_error(char *msg);
struct s_bsq	*init_s_bsq(char **map, int nb_cols, int nb_lines);
struct s_pos	*init_s_pos(int x, int y);

/*
** lines.c
*/
char			*get_line(char *file_content, int i1, int i2);
struct s_buffers	*get_lines(char *file_content);
void			test_lines_length(struct s_buffers *lines);

/*
** map.c
*/
char	**parse_map(struct s_buffers *lines);
void	cross_map(char **map, int nb_lines, int nb_cols);
void	free_map(char **map, int nb_lines);

/*
** algo.c
*/
void	algo(char **map, int nb_lines, int nb_cols);
int	find_square(struct s_bsq *bsq, int i);
void	fill_biggest_square(struct s_bsq *bsq);

#endif
