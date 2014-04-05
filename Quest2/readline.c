/*
** readline.c for readline.c in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 10:09:49 2013 Alexandre LEVY
** Last update Sat Oct 12 11:13:22 2013 Alexandre LEVY
*/

#include "midgard.h"

char		*readLine(t_heros *hero, t_ennemi *ennemie)
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      if (my_strcmp(buff, "quit") == 0)
	return (NULL);
      if (execut_action(hero, ennemie, buff) == -1)
	return (NULL);
      free(buff);
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
