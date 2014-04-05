##
## Makefile for Makefile in /home/levy_a/levy_a
## 
## Made by Alexandre LEVY
## Login   <levy_a@etna-alternance.net>
## 
## Started on  Sat Oct 12 11:20:04 2013 Alexandre LEVY
## Last update Sun Oct 13 00:37:48 2013 alexandre levy
##

CC	= gcc

SRC	= $(wildcard *.c)

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