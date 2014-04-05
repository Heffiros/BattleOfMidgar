/*
  re** midgard.h for midgard.h in /home/levy_a/projet/Midgard
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Fri Oct 11 11:43:19 2013 Alexandre LEVY
** Last update Sat Oct 12 14:21:31 2013 Alexandre LEVY
*/

#ifndef MIDGARD_H_
# define MIDGARD_H_

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_heros
{
  char *nom;
  int PV;
  int PM;
}            t_heros;

typedef struct s_ennemi
{
  char *nom;
  int PV;
  int PM;
}             t_ennemi;

int	check_params(char *str, char *name, t_heros *hero, t_ennemi *ennemie);
void	feel_champ(char *str, t_heros *hero);
void	feel_ennemie(t_ennemi *ennemie);
int	attack(t_heros *hero, t_ennemi *ennemie);
int	slash(t_heros *hero, t_ennemi *ennemie);
int	thunder2(t_heros *hero, t_ennemi *ennemie);
int	stats(t_heros *hero, t_ennemi *ennemie);
int	fire(t_heros *hero, t_ennemi *ennemie);
int	libra(t_heros *hero, t_ennemi *ennemie);
int	turn(t_heros *hero, t_ennemi *ennemie);
char	*readLine(t_heros *hero, t_ennemi *ennemie);
int	execut_action(t_heros *hero, t_ennemi *ennemie, char *action);
int	search_skill(t_heros *hero, t_ennemi *ennemie, char *action);
int	my_strcpy(char *dest, char *src);
# endif /* MIDGARD_H_ */
