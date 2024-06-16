# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 19:47:07 by axcastil          #+#    #+#              #
#    Updated: 2024/06/16 17:34:11 by axcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(shell find libft/sources/ -name "*.c") \
				$(shell find ft_printf/sources/ -name "*.c") \
				$(shell find get_next_line/sources/ -name "*.c")


OBJS		=	$(SRCS:.c=.o)

NAME 		= 	lib42.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS) 
				
fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re