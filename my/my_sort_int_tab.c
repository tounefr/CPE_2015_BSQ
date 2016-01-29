/*
** my_sort_int_tab.c for  in /home/henon_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Tue Oct  6 15:11:52 2015 Thomas Henon
** Last update Tue Oct  6 16:51:49 2015 Thomas Henon
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	i2;
  int	temp;

  i = 0;
  while (i < size)
    {
      i2 = i + 1;
      while (i2 < size)
	{
	  if (tab[i2] < tab[i])
	    {
	      temp = tab[i];
	      tab[i] = tab[i2];
	      tab[i2] = temp;
	    }
	  i2 = i2 + 1;
	}
      i = i + 1;
    }
}
