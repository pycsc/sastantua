# **************************************************************************** #
#                                                                              #
#                                                            +#                #
#    Makefile                                               +##                #
#                                                         +###+                #
#    By: lucas <lucas@tsiaraso.com>                   +########+               #
#                                                           +###+              #
#    Created: 2018/09/26 20:06:55 by lucas                   ##+               #
#    Updated: 2018/09/26 20:06:55 by lucas                  #+                 #
#                                                                              #
# **************************************************************************** #

NAME = sastantua

CC = gcc

CFLAGS = -Wall -Wextra -Werror

IDIR = includes

SDIR = srcs

SRCS = $(wildcard $(SDIR)/*.c)

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -I$(IDIR) $(CFLAGS) $^ -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(IDIR) -c $< -o $@

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean

.NOTPARALLEL: re
