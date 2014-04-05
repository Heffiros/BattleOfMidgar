/*
** heal.c for heql in /home/levy_a/projet/Midgar/levy_a/Quest2
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Sun Oct 13 10:20:37 2013 Alexandre LEVY
** Last update Sun Oct 13 10:22:32 2013 Alexandre LEVY
*/

#include "midgard.h"

int	heal(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PM >= 3)
    {
      if ((hero->PV + 25) > hero->PVmax)
	hero->PV = hero->PVmax;
      else
	hero->PV = hero->PV + 25;
      my_putstr("you have won 25 PV\n");
      return (0);
    }
  else
    return (2);
}
