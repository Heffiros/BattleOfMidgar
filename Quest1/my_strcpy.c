/*
** my_strcpy.c for my_strcpy.c in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 20:51:47 2013 Alexandre LEVY
** Last update Fri Oct 11 21:00:19 2013 Alexandre LEVY
*/

#include "midgard.h"

int	my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (0);
}
