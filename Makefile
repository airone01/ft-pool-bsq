# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elagouch <elagouch@42>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 10:52:47 by elagouch          #+#    #+#              #
#    Updated: 2024/09/30 15:59:52 by elagouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = bsq
CC = cc
CFLAGS = -Wall -Werror -Wextra -Wpedantic -g3
SRC = main.c					\
	  ft_file.c					\
      ft_putstr.c				\
      ft_strsplit.c				\
      ft_strcat.c				\
      ft_strcmp.c				\
	  ft_strcpy.c				\
	  ft_strcut.c				\
      ft_strdup.c				\
      ft_strjoin.c				\
	  ft_strlcat.c				\
      ft_strlen.c				\
	  ft_strncpy.c				\
      ft_strnew.c				\
      bsq_map_read.c			\
      bsq_map_size.c
OBJ = $(SRC:.c=.o)

all: $(PROG)
$(PROG): $(OBJ)
	$(CC) $(CFLAGS) -o $(PROG) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(PROG)
re: fclean all

.PHONY: all fclean re
