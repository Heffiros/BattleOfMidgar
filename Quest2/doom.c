/*
** doom.c for doom in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 14:55:01 2013 BOUFFI hicham
** Last update Sat Oct 12 15:04:56 2013 Alexandre LEVY
*/

#include "midgard.h"

int	doom(t_heros *hero, t_ennemi *ennemie)
{
  if (ennemie->PM >= 5)
    {
      hero->PV -= 11;
      ennemie->PM -= 5;
      if (hero->PV > 0)
	{
	  my_putstr("doom -> ha!! ha!!,takes it\n");
	  return (0);
	}
      else
	return (-1);
    }
  else
    {
      my_putstr("shit !!! I can't !!!\n");
      return (3);
    }
}
