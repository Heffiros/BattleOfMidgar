/*
** round.c for round..c in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 15:19:55 2013 Alexandre LEVY
** Last update Sun Oct 13 12:03:24 2013 Alexandre LEVY
*/

#include "midgard.h"

int	turn(t_heros *hero, t_ennemi *ennemie)
{ 
  while (1)
    {
       my_putstr("Your turn-> ");
       if (readLine(hero, ennemie) == NULL)
	 return (-1);
    }
  return (0);
}
