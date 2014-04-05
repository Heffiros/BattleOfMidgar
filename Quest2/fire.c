/*
** fire.c for fire in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:35:21 2013 BOUFFI hicham
** Last update Sun Oct 13 11:29:22 2013 Alexandre LEVY
*/

#include "midgard.h"

void	draw_fire()
{
  my_putstr("\033[31;40m");
  my_putstr("/\\  /\\   /\\ \n");
  my_putstr("\033[0m");
}
int	fire(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PM > 3)
    {
      draw_fire();
      hero->PM -= 3;
      ennemie->PV -= 10;
      if (ennemie->PV > 0)
	{
	  my_putstr("\033[31;40m");
	  my_putstr("Fire -10 PV OK !!! COME ON !!!:\n");
	  my_putstr("\033[0m");
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
