/*
** ls_util.c for  in /home/thomas/Documents/LS
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Sat Nov 28 16:28:40 2015 Thomas Henon
** Last update Wed Dec 16 13:14:37 2015 Thomas Henon
*/

#include "bsq.h"

void	my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
}

void	my_malloc(void **ptr, int size)
{
  if (!(*ptr = malloc(size)))
    {
      my_putstr_error("Malloc error\n");
      exit(1);
    }
}


void	fatal_error(char *msg)
{
  my_putstr_error(msg);
  exit(1);
}

struct s_bsq	*init_s_bsq(char **map, int nb_cols, int nb_lines)
{
  struct s_bsq	*bsq;

  my_malloc((void*)&bsq, sizeof(struct s_bsq));
  bsq->map = map;
  bsq->x = 0;
  bsq->y = 0;
  bsq->nb_cols = nb_cols;
  bsq->nb_lines = nb_lines;
  bsq->nb_squares = 0;
  return (bsq);
}

struct s_pos	*init_s_pos(int x, int y)
{
  struct s_pos	*pos;

  my_malloc((void*)&pos, sizeof(struct s_pos));
  pos->x = x;
  pos->y = y;
  return (pos);
}
