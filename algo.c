/*
** algo.c for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Thu Dec  3 12:47:55 2015 Thomas Henon
** Last update Wed Dec 16 13:31:10 2015 Thomas Henon
*/

#include "bsq.h"

int		find_square(struct s_bsq *bsq, int i)
{
  int		x;
  int		y;

  if (((bsq->x+i)>(bsq->nb_cols-1))||((bsq->y+i)>(bsq->nb_lines-1)))
    return (0);
  y = bsq->y;
  while (y <= (bsq->y+i))
    {
      x = bsq->x;
      while (x <= (bsq->x+i))
	{
	  if (bsq->map[y][x] == 'o')
	    return (0);
	  x++;
	}
      y++;
    }
  return (1);
}

void		fill_biggest_square(struct s_bsq *bsq)
{
  int		x;
  int		y;

  y = bsq->square_pos.y;
  while (y < (bsq->square_pos.y + bsq->nb_squares))
    {
      x = bsq->square_pos.x;
      while (x < (bsq->square_pos.x + bsq->nb_squares))
	bsq->map[y][x++] = 'x';
      y++;
    }
}

void		algo(char **map, int nb_lines, int nb_cols)
{
  struct s_bsq	*bsq;
  int		square;

  bsq = init_s_bsq(map, nb_cols, nb_lines);
  while (bsq->y < bsq->nb_lines)
    {
      bsq->x = 0;
      while (bsq->x < bsq->nb_cols)
	{
	  square = 0;
	  while (find_square(bsq, square))
	    square++;
	  if (square > bsq->nb_squares)
	    {
	      bsq->nb_squares = square;
	      bsq->square_pos.x = bsq->x;
	      bsq->square_pos.y = bsq->y;
	    }
	  bsq->x++;
	}
      bsq->y++;
    }
  fill_biggest_square(bsq);
}
