/*
** thunder.c for thunder in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:51:52 2013 BOUFFI hicham
** Last update Sun Oct 13 11:32:56 2013 Alexandre LEVY
*/

#include "midgard.h"
void	draw_thunder()
{
  my_putstr("\033[5;33;40m");
  my_putstr("/   /   / \n\\   \\   \\ \n/   /   /\n");
  my_putstr("\033[0m");
}

int	thunder2(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PM > 5)
    {
      draw_thunder();
      hero->PM -= 5;
      ennemie->PV -= 15;
      if (ennemie->PV > 0)
	{
	  my_putstr("\033[33;40m");
	  my_putstr("thunder : shit you're serious!!! -15 PV of dora:\n");
	  my_putstr("\033[0m");
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
