/*
** my_str_to_wordtab.c for  in /home/thomas/Documents/epitech/mylib
** 
** Made by thomas
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Wed Nov  4 12:32:23 2015 thomas
** Last update Sun Nov  8 21:57:05 2015 Thomas Henon
*/

#include <stdlib.h>
#include "my.h"


char	is_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  if (c >= 'A' && c <= 'Z')
    return (1);
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int	nbr_words(char *str, char d)
{
  int	i;
  int	nbr_words;

  nbr_words = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == d)
	{
	  nbr_words++;
	  while (str[i] == d)
	    i++;
	}
      else
	i++;
    }
  return (nbr_words);
}

char	*malloc_word(char *str, int start, int end)
{
  char	*word;
  int	i;

  if (!(word = malloc(end-start+1)))
    return (0);
  i = 0;
  while (start <= end)
    {
      word[i] = str[start];
      start++;
      i++;
    }
  return (word);
}

char	*get_next_word(char *str, int *cur_word, char d)
{
  int	i;
  int	word_start;
  int	word_end;
  int	nbr_words;

  nbr_words = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == d)
	{
	  word_start = i;
	  while (str[i] == d)
	    i++;
	  word_end = i-1;
	  if (nbr_words == *cur_word)
	    return (malloc_word(str, word_start, word_end));
	  nbr_words++;
	}
      else
	i++;
    }
  return (0);
}

char	**my_str_to_wordtab(char *str, char d)
{
  char	**words;
  char	nbr_words_;
  int	i;

  i = 0;
  nbr_words_ = nbr_words(str, d);
  if (!(words = malloc(nbr_words_ + 1)))
    return (0);
  while (i < nbr_words_)
    {
      words[i] = get_next_word(str, &i, d);
      i++;
    }
  return (words);
}
