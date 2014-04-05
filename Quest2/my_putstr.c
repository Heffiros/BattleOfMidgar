/*
** my_putstr.c for my_putstr.c in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:34:17 2013 Alexandre LEVY
** Last update Fri Oct 11 11:37:48 2013 Alexandre LEVY
*/

#include "midgard.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
