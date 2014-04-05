/*
** bite.c for bite in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 14:44:47 2013 BOUFFI hicham
** Last update Sat Oct 12 22:18:42 2013 alexandre levy
*/

#include "midgard.h"

int	bite(t_heros *hero, t_ennemi *ennemie)
{
  hero->PV -= 6;
  if (hero->PV > 0)
    {
      my_putstr("Bite : in your face baby -6 PV\n");
      return (0);
    }
  else
    return (-1);
}
