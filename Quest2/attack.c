/*
** attack.c for attack in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 10:56:21 2013 BOUFFI hicham
** Last update Sat Oct 12 13:50:57 2013 Alexandre LEVY
*/

#include "midgard.h"

int	attack(t_heros *hero, t_ennemi *ennemie)
{ 
  ennemie->PV -= 7;
  if (ennemie->PV > 0)
    {
      my_putstr("dora lost -7 PV\n");
      return (0);
    }
  else
    return (-1);
}
