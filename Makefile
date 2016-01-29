##
## Makefile for  in /home/thomas/Documents/epitech/CPE_2015_BSQ
## 
## Made by Thomas Henon
## Login   <thomas.henon@epitech.eu>
## 
## Started on  Wed Dec  2 18:10:57 2015 Thomas Henon
## Last update Sun Jan  3 20:31:28 2016 thomas
##

NAME	= bsq

CC	= gcc

RM	= rm -f

SRCS	= main.c \
	  linked_lists.c \
	  buffers.c \
	  file.c \
	  util.c \
	  lines.c \
	  map.c \
	  algo.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -l my -L ./my -I ./my -Wall

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
