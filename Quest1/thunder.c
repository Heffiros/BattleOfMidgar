/*
** thunder.c for thunder in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:51:52 2013 BOUFFI hicham
** Last update Sat Oct 12 13:32:47 2013 Alexandre LEVY
*/

#include "midgard.h"

int	thunder2(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PM > 5)
    {
      hero->PM -= 5;
      ennemie->PV -= 15;
      if (ennemie->PV > 0)
	{
	  my_putstr("shit you're serious!!! -15 PV of dora:\n");
	  return (0);
	}
      else
	return (-1);
    }
  else
    {
      my_putstr("ha!! ha!!, you can't do it\n");
      return (0);
    }
}
