/*
** libra.c for libra in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 14:24:48 2013 BOUFFI hicham
** Last update Sat Oct 12 13:33:18 2013 Alexandre LEVY
*/

#include "midgard.h"

int	libra(t_heros *hero, t_ennemi *ennemie)
{
  if (hero->PM >= 1)
    {
      hero->PM -= 1;
      my_put_nbr(ennemie->PV);
      my_putchar('\n');
      my_put_nbr(ennemie->PM);
      my_putchar('\n');
      my_putstr(ennemie->nom);
      my_putchar('\n');
      my_putstr("you lost 1 PM\n");
      return (0);
    }
  else
    { 
      my_putstr("ha!! ha!!, you can't do it\n");
	return (3);
    }
}
