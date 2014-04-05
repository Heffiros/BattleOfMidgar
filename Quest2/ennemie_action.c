/*
** ennemie_action.c for ennemy_action.c in /home/levy_a/levy_a
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Sat Oct 12 10:11:10 2013 Alexandre LEVY
** Last update Sun Oct 13 12:06:40 2013 Alexandre LEVY
*/

#include "midgard.h"

int		action_ennemy(t_heros *hero, t_ennemi *ennemie)
{

  static int	i;  
  int		nb;
  int		ret;
   
  my_putstr("Dora's turn-> ");
  if (i == 0)
    srand(time(NULL));
  nb = rand() % 10;
  if (nb >= 1 && nb <= 4)
    ret = bite(hero, ennemie);
  else if (nb >= 5 && nb <= 8)
    ret = earthquake(hero, ennemie);
  else
    ret = doom(hero, ennemie);
  i++;
  if (ret == -1)
    {
      my_putstr("GAME OVER\n");
      return (-1);
    }
  return (0);
}
