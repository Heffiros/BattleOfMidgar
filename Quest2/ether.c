/*
** ether.c for ether.c in /home/levy_a/projet/Midgar/levy_a/Quest2
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Sun Oct 13 10:25:57 2013 Alexandre LEVY
** Last update Sun Oct 13 11:26:09 2013 Alexandre LEVY
*/

#include "midgard.h"


void	draw_ether()
{
  my_putstr("\033[34;40m");
  my_putstr("  -- \n/   \\\n|   | \n\\---/\n");
  my_putstr("\033[0m");
}

int	ether(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->ether > 0)
    {
      draw_ether();
      if ((hero->PM + 12) >= hero->PMmax)
	hero->PM = hero->PMmax;
      else
	hero->PM += 30;
      my_putstr("\033[34;40m");
      my_putstr("i use an ether and i won 12PM\n");
      my_putstr("\033[0m");
      hero->ether -= 1;
      return (0);
    }
  else
    {
      my_putstr("you don't have any ether\n");
      return (2);
    }
}
