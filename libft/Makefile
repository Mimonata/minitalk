# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 19:06:25 by spitul            #+#    #+#              #
#    Updated: 2024/04/02 17:57:12 by spitul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_DIR = src/

OBJS_DIR = obj/

CFLAGS = -Wall -Wextra -Werror -I. -I../include

CC = cc

RM = rm -f

AR =  ar rcs

SRCS = 	ft_lib/ft_atoi.c\
       	ft_lib/ft_bzero.c\
       	ft_lib/ft_calloc.c\
       	ft_lib/ft_isalnum.c\
       	ft_lib/ft_isalpha.c\
       	ft_lib/ft_isascii.c\
       	ft_lib/ft_isdigit.c\
       	ft_lib/ft_isprint.c\
       	ft_lib/ft_itoa.c\
       	ft_lib/ft_memchr.c\
       	ft_lib/ft_memcmp.c\
       	ft_lib/ft_memcpy.c\
       	ft_lib/ft_memmove.c\
       	ft_lib/ft_memset.c\
       	ft_lib/ft_putchar_fd.c\
       	ft_lib/ft_putendl_fd.c\
       	ft_lib/ft_putnbr_fd.c\
       	ft_lib/ft_putstr_fd.c\
       	ft_lib/ft_split.c\
       	ft_lib/ft_strchr.c\
       	ft_lib/ft_strdup.c\
       	ft_lib/ft_striteri.c\
       	ft_lib/ft_strjoin.c\
       	ft_lib/ft_strlcat.c\
       	ft_lib/ft_strlcpy.c\
       	ft_lib/ft_strlen.c\
       	ft_lib/ft_strmapi.c\
       	ft_lib/ft_strncmp.c\
       	ft_lib/ft_strnstr.c\
       	ft_lib/ft_strrchr.c\
	   	ft_lib/ft_strtrim.c\
       	ft_lib/ft_substr.c\
       	ft_lib/ft_tolower.c\
       	ft_lib/ft_toupper.c\
		ft_printf/ft_put_charstr.c\
		ft_printf/ft_put_hex.c\
		ft_printf/ft_put_ptr.c\
		ft_printf/ft_put_unsigned.c\
		ft_printf/ft_putnbr.c\
		ft_printf/ft_printf.c

#SRCS = $(LIBFT_DIR) $(FTPRINTF_DIR)

OBJS = $(SRCS:.c=.o)
# OBJS = $(patsubst $(SRCS_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))
# OBJS    = $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))


all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) -o $@ $(OBJS)

#$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c
#	@mkdir -p $(@D)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJS) 

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re