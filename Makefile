# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 19:47:07 by axcastil          #+#    #+#              #
#    Updated: 2024/06/15 18:13:47 by axcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(shell find . -name "*.c")
OBJS		=	$(SRCS:.c=.o)

NAME 		= 	42_collection.a

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