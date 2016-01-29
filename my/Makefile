##
## Makefile for  in /home/henon_t/rendu/Piscine_C_J10
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Fri Oct  9 10:03:01 2015 Thomas Henon
## Last update Tue Nov 10 11:43:31 2015 Thomas Henon
##

CC	= gcc

RM	= rm -f

NAME	= libmy.a

SRCS	=	my_putchar.c		\
		my_isneg.c		\
		my_put_nbr.c		\
		my_swap.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_getnbr.c		\
		my_sort_int_tab.c	\
		my_power_rec.c		\
		my_square_root.c	\
		my_is_prime.c		\
		my_find_prime_sup.c	\
		my_strcpy.c		\
		my_strncpy.c		\
		my_revstr.c		\
		my_strstr.c		\
		my_strcmp.c		\
		my_strncmp.c		\
		my_strupcase.c		\
		my_strlowcase.c		\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_str_isnum.c		\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_str_isprintable.c	\
		my_showstr.c		\
		my_showmem.c		\
		my_strcat.c		\
		my_strncat.c		\
		my_str_to_wordtab.c	\
		my_put_nbr_base.c	\
		my_put_unbr.c		\
		my_put_unbr_base.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) \
	&& ranlib $(NAME) \

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
