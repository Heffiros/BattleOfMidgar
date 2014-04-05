/*
** stat.c for stat in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 14:09:05 2013 BOUFFI hicham
** Last update Sat Oct 12 14:18:43 2013 Alexandre LEVY
*/

#include "midgard.h"

int	stats(t_heros *hero, t_ennemi *ennemie)
{
  my_put_nbr(hero->PV);
  my_putchar('\n');
  my_put_nbr(hero->PM);
  my_putchar('\n');
  my_putstr(hero->nom);
  my_putchar('\n');
  return (2);
}
