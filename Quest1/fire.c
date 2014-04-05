/*
** fire.c for fire in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:35:21 2013 BOUFFI hicham
** Last update Sat Oct 12 13:31:41 2013 Alexandre LEVY
*/

#include "midgard.h"

int	fire(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PM > 3)
    {
      hero->PM -= 3;
      ennemie->PV -= 10;
      if (ennemie->PV > 0)
	{
	  my_putstr("-10 PV OK !!! COME ON !!!:\n");
	  return (0);
	}
      else
	return (-1);
    }
  else
    {
      my_putstr("ha!! ha!!, you can't do it\n");
      return (3);
    }
}
