/*
** my_putnbr.c for my_put_nbr in /home/levy_a/levy_a
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Sat Oct 12 10:14:04 2013 Alexandre LEVY
** Last update Sat Oct 12 10:14:07 2013 Alexandre LEVY
*/

#include "midgard.h"

void    my_put_nbr(int n)
{
  if (n >= 10)
    {
      my_put_nbr(n / 10);
      my_put_nbr(n % 10);
    }
  else
    my_putchar(48 + n);
}
