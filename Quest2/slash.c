/*
** slash.c for slash in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:10:46 2013 BOUFFI hicham
** Last update Sat Oct 12 13:30:54 2013 Alexandre LEVY
*/

#include "midgard.h"

int	slash(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PV >= 4)
    {
      ennemie->PV -= 10;
      hero->PV -= 2;
      if (ennemie->PV > 0)
	{
	  my_putstr("good dora lost -10 PV:\n");
	  return (0);
	}
      else
	return (-1);
    }
  else
    {
      my_putstr("ooooh are you serious look at your PM !!!!!!\n");
      return (3);
    }
}
