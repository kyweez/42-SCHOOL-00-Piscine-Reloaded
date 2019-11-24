# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: auboudie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 14:28:15 by auboudie          #+#    #+#              #
#    Updated: 2018/11/09 00:53:18 by auboudie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	ft_display_file

COMP	=	gcc

OBJS	=	$(SRCS:%.c=%.o)

CFLAGS	= 	-Wall \
		  	-Wextra \
		  	-Werror 

SRCS	= 	./main.c \
		  	./ft_display_file.c \
			./ft_putchar_stdout.c \
			./ft_putchar_stderr.c \
			./ft_putstr_stdout.c \
			./ft_putstr_stderr.c

RM		=	rm -Rf 

all 	:	$(NAME)

$(NAME) :	$(OBJS)
			$(COMP) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
