/*
** potion.c for potion in /home/levy_a/projet/Midgar/levy_a/Quest2
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Sun Oct 13 10:22:56 2013 Alexandre LEVY
** Last update Sun Oct 13 11:26:10 2013 Alexandre LEVY
*/

#include "midgard.h"

void	draw_potion()
{
  my_putstr("\033[32;40m");
  my_putstr("  -- \n/   \\\n|   | \n\\---/\n");
  my_putstr("\033[0m");
}
int	potion(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->potion > 0)
    {
      draw_potion();
      if ((hero->PV + 30) >= hero->PVmax)
	hero->PV = hero->PVmax;
      else
	hero->PV += 30;
      my_putstr("I use a potion and i won 30PDV\n");
      hero->potion = hero->potion - 1;
     return (0);
    }
  else
    {
      my_putstr("you don't have potion\n");
      return (2);     
    }
}
