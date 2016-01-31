NAME		= game_2048

ALL_CFLAGS	= -Wall -Wextra -Werror
CC			= gcc
RM			= rm -rf

LIBFT_DIR	= libft
OBJS_DIR	= objs
SRCS_DIR	= srcs
INCS_DIR	= incs

SRCS		=ft_aff_square.c				\
					ft_back_to_normal.c		\
					ft_can_move.c			\
					ft_down.c				\
					ft_left.c				\
					ft_merge_down.c			\
					ft_merge_left.c			\
					ft_merge_right.c		\
					ft_merge_up.c			\
					ft_move_down.c			\
					ft_move_left.c			\
					ft_move_right.c			\
					ft_move_up.c			\
					ft_new_digit.c			\
					ft_new_game.c			\
					ft_randomise.c			\
					ft_right.c				\
					ft_two_or_four.c		\
					ft_up.c					\
					ft_while_main.c			\
					ft_ncurses_colors.c     \
					main.c

OBJS		= $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@$(CC) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft -lncurses

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(CC) $(ALL_CFLAGS) -I$(INCS_DIR) -I$(LIBFT_DIR)/$(INCS_DIR) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR):
	mkdir $(OBJS_DIR)
