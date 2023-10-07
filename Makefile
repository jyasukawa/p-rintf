CC			= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS		= ft_printf.c \
					ft_words_func.c \
					ft_numbers_func.c

OBJS		= $(SRCS:.c=.o)
NAME		= libftprintf.a

all:			$(NAME)

$(NAME):	$(OBJS)
					@ar -rcs $(NAME) $(OBJS)

%.o:			%.c
					$(CC) $(CFLAGS) -c $< -o $@

clean:
					rm -f $(OBJS)

fclean:		clean
					rm -f $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
