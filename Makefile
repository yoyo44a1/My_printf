##
## Makefile for Makefile in /home/chambo_c/Rendu/Unix_System/PSU_2015_my_popup
## 
## Made by Arthur Chambost
## Login   <chambo_c@epitech.net>
## 
## Started on  Tue Dec  1 11:13:23 2015 Arthur Chambost
## Last update Tue Apr 12 23:36:01 2016 Arthur Chambost
##

NAME		= my_printf

CC		= gcc -Wall -Wextra

RM		= rm -rf

CFLAGS		+= -I./include/

SRC		= struct_my_printf.c\
		  my_printf_1.c\
		  my_printf_2.c\

OBJ		= $(SRC:.c=.o)

LIB		= -L. -lmy

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
