##
## Makefile for Makefile in /home/levy_a/levy_a
## 
## Made by Alexandre LEVY
## Login   <levy_a@etna-alternance.net>
## 
## Started on  Sat Oct 12 11:20:04 2013 Alexandre LEVY
## Last update Sat Oct 12 16:57:07 2013 Alexandre LEVY
##

CC	= gcc

SRC	= main.c		\
	  check_param.c		\
	  my_putchar.c		\
	  my_putstr.c		\
	  my_strcmp.c		\
	  my_putnbr.c		\
	  turn.c		\
	  readline.c		\
	  execution.c		\
	  attack.c		\
	  slash.c		\
	  fire.c		\
	  thunder.c		\
	  stat.c		\
	  libra.c		\
	  ennemie_action.c	\
	  bite.c		\
	  earthquake.c		\
	  doom.c		\

NAME	= ragnarok

OBJ	= $(SRC:.c=.o)

all	: $(NAME)

$(NAME)	: $(OBJ)
	 gcc -o $(NAME) $(OBJ) -W -Wall -Werror

 clean	:
	 rm -f $(OBJ)
fclean	: clean
	 rm -f $(NAME)

re	: fclean all