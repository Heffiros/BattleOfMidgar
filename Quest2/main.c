/*
** main.c for midgard.h in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 10:52:04 2013 Alexandre LEVY
** Last update Sun Oct 13 11:42:00 2013 Alexandre LEVY
*/

#include "midgard.h"

int		main(int ac, char **av)
{

  t_heros   hero;
  t_ennemi ennemie;

  if (ac != 3)
    {
      my_putstr("./ragnarock -n <Nom du champion>\n || ./ragnarock -help <nom du champion>\n");
      return (-1);
    }
  else
    {
      my_putstr("\033[1;1H\033[2J");
      my_putstr("BATTLE OF MIDGAR\n");
      check_params(av[1], av[2], &hero, &ennemie);
    }
  return (0);
}
      
