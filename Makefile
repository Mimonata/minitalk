# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 16:56:03 by spitul            #+#    #+#              #
#    Updated: 2024/04/02 18:06:29 by spitul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEC = client
NAMES = server

CC = cc
CFLAGS = -Wall -Wextra -Werror -I -I./libft/include
RM = rm -f

LIBFT = ./libft/libft.a

SRCC = client.c
SRCS = server.c

OBJC = $(SRCC:.c=.o)
OBJS = $(SRCS:.c=.o)

all: $(NAMEC) $(NAMES)

runft:
	@make -C ./libft

$(NAMEC): $(OBJC) runft $(LIBFT) 
	$(CC) $(CFLAGS) $(OBJC) $(LIBFT) -o $(NAMEC) 
	
$(NAMES): $(OBJS) runft $(LIBFT) 
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAMES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJC)
	$(RM) $(OBJS)
	@make -C libft clean

fclean: clean
	@$(RM) $(NAMEC)
	@$(RM) $(NAMES)
	@make -C libft fclean

re: fclean all

.PHONY: all bonus clean fclean re
	