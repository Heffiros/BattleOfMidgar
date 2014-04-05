/*
** earthquake.c for earthquake in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 14:48:13 2013 BOUFFI hicham
** Last update Sat Oct 12 22:19:31 2013 alexandre levy
*/

#include "midgard.h"

int	earthquake(t_heros *hero, t_ennemi *ennemie)
{
  if (ennemie->PV > 3)
    {
      hero->PV -= 15;
      ennemie->PV -= 3;
      if (hero->PV > 0)
	{
	  my_putstr("earthquake : get my skill in yours in your face baby!\n");
	  return (0);
	}
      else
	return (-1);
    }
  else
    {
      my_putstr("you're lucky !!!!\n");
      return (3);
    }
}
