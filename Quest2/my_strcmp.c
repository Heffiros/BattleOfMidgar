/*
** my_strcmp.c for my_strcmp.c in /home/levy_a/projet/hyrule
** 
** Made by Alexandre LEVY
** Login   <levy_a@etna-alternance.net>
** 
** Started on  Sat Oct  5 11:15:34 2013 Alexandre LEVY
** Last update Sat Oct  5 15:58:45 2013 Alexandre LEVY
*/

int	my_strcmp(char *str, char *str2)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == str2[i])
	i++;
      else
	return (-1);
    }
  return (0);
}
