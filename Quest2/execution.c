/*
** execution.c for execution.c in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 17:30:14 2013 Alexandre LEVY
** Last update Sun Oct 13 11:43:34 2013 Alexandre LEVY
*/

#include "midgard.h"

int	search_skill(t_heros *hero, t_ennemi *ennemie, char *action)
{
  int	ret;

  if (my_strcmp(action, "attack") == 0)
    ret = attack(hero, ennemie);
  else if (my_strcmp(action, "slash") == 0)
    ret = slash(hero, ennemie);
  else if (my_strcmp(action, "fire") == 0)
    ret = fire(hero, ennemie);
  else if (my_strcmp(action, "thunder") == 0)
    ret = thunder2(hero, ennemie);
  else if (my_strcmp(action, "stat") == 0)
    ret = stats(hero, ennemie);
  else if (my_strcmp(action, "libra") == 0)
    ret = libra(hero, ennemie);
  else if (my_strcmp(action, "potion") == 0)
    ret = potion(hero, ennemie);
  else if (my_strcmp(action, "heal") == 0)
    ret = heal(hero, ennemie);
  else if (my_strcmp(action, "ether") == 0)
    ret = ether(hero, ennemie);
  else
    return (2);
  return (ret);
}

int	execut_action(t_heros *hero, t_ennemi *ennemie, char *action)
{
  int	ret;
  int	dead;

  ret = 0;
  dead = 0;
  ret =  search_skill(hero, ennemie, action);
  if (ret == -1)
    {
      my_putstr("GG WP YOU WIN THIS BATLLE \n");
      return (-1);
    }
  if (ret == 2 || ret == 3)
    my_putstr("Invalide skill or not enough life of mana\n");  
  if (ret == 0)
    dead = action_ennemy(hero, ennemie);
  if (dead == -1)
    return (-1);
  return (0);
}
