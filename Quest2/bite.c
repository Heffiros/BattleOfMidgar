/*
** bite.c for bite in /home/bouffi_h/Battle
** 
** Made by BOUFFI hicham
** Login   <bouffi_h@etna-alternance.net>
** 
** Started on  Fri Oct 11 14:44:47 2013 BOUFFI hicham
** Last update Sun Oct 13 11:10:56 2013 Alexandre LEVY
*/

#include "midgard.h"

void	draw_bite()
{
  my_putstr("\033[35;40m");
  my_putstr("<========3\n");
  my_putstr("\033[0m");
}

int	bite(t_heros *hero, t_ennemi *ennemie)
{
  draw_bite();
  hero->PV -= 6;
  if (hero->PV > 0)
    {
      my_putstr("\033[35;40m");
      my_putstr("Bite : in your face baby -6 PV\n");
      my_putstr("\033[0m");
      return (0);
    }
  else
    return (-1);
}
