/*
** check_param.c for check_param.c in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 10:50:54 2013 Alexandre LEVY
** Last update Sat Oct 12 15:21:26 2013 Alexandre LEVY
*/

#include "midgard.h"

void	feel_champ(char *str, t_heros *hero)
{
  hero->nom = str;
  hero->PV = 100;
  hero->PM = 30;
}

void	feel_ennemie(t_ennemi *ennemie)
{
  ennemie->nom = "Dora l'exploratrice"; 
  ennemie->PV = 75;
  ennemie->PM = 20;
}

int	check_params(char *str, char *name, t_heros *hero, t_ennemi *ennemie)
{
  if (my_strcmp(str, "-n") == 0)
    {
      feel_champ(name, hero);
      feel_ennemie(ennemie);
      my_putstr(hero->nom);
      my_putchar('\n');
      turn(hero, ennemie);
    }
  else
    {
      my_putstr("enter the -n option\n");
      return (-1);
    }
  return (0);
}
