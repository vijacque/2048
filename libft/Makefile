# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vijacque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/15 15:53:13 by vijacque          #+#    #+#              #
#    Updated: 2016/01/21 14:26:11 by vijacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = libft.a
ALL_CFLAGS = -Wall -Wextra -Werror -g
CC         = gcc
RM		   = rm -rf

SRCS_DIR   = srcs
OBJS_DIR   = objs
INCS_DIR   = incs
S		   = ft_atoi.c						\
			 ft_bzero.c						\
			 ft_intlen.c					\
			 ft_isalnum.c					\
			 ft_isalpha.c					\
			 ft_isascii.c					\
			 ft_isdigit.c					\
			 ft_isprint.c					\
			 ft_itoa.c						\
			 ft_memalloc.c					\
			 ft_putnstr.c					\
			 ft_memccpy.c					\
			 ft_memchr.c					\
			 ft_memcmp.c					\
			 ft_memcpy.c					\
			 ft_memdel.c					\
			 ft_memmove.c					\
			 ft_memset.c					\
			 ft_putchar.c					\
			 ft_putchar_fd.c				\
			 ft_putendl.c					\
			 ft_putendl_fd.c				\
			 ft_putnbr.c					\
			 ft_putnbr_fd.c					\
			 ft_putstr.c					\
			 ft_putstr_fd.c					\
			 ft_strcat.c					\
			 ft_strchr.c					\
			 ft_strclr.c					\
			 ft_strcmp.c					\
			 ft_strcpy.c					\
			 ft_strdel.c					\
			 ft_strdup.c					\
			 ft_strequ.c					\
			 ft_striter.c					\
			 ft_striteri.c					\
			 ft_strjoin.c					\
			 ft_strlcat.c					\
			 ft_strlen.c					\
			 ft_strmap.c					\
			 ft_strmapi.c					\
			 ft_strncat.c					\
			 ft_strncmp.c					\
			 ft_strncpy.c					\
			 ft_strnequ.c					\
			 ft_strnew.c					\
			 ft_strnew.c					\
			 ft_strnstr.c					\
			 ft_strrchr.c					\
			 ft_strsplit.c					\
			 ft_strstr.c					\
			 ft_strsub.c					\
			 ft_strtrim.c					\
			 ft_tolower.c					\
			 ft_toupper.c					\
			 get_next_line.c

SRCS	   = $(addprefix $(SRCS_DIR)/, $S)
OBJS       = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(ALL_CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR):
	mkdir $(OBJS_DIR)
