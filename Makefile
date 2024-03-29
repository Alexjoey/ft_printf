# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amylle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:33:47 by amylle            #+#    #+#              #
#    Updated: 2024/02/22 00:10:52 by amylle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_formats.c ft_printf.c ft_format_char.c ft_isformat.c ft_format_str.c\
			  ft_format_decimal.c ft_format_int.c ft_format_unsigned_decimal.c\
			  ft_itoa_base.c ft_format_lowhex.c ft_format_highhex.c ft_format_pointer.c

OBJS		= $(SRCS:.c=.o)

CC			= cc
CFLAGS		= -g -Wall -Werror -Wextra -I$(LIBFT_PATH)

RM			= rm -f

LIBFT_PATH	= ./libft
LIBFT		= $(LIBFT_PATH)/libft.a

NAME		= libftprintf.a

all:		$(LIBFT) $(NAME)

$(LIBFT):	
			make -C $(LIBFT_PATH)

$(NAME):	$(OBJS)
				cp $(LIBFT) $(NAME)
				ar rcs $(NAME) $(OBJS)
clean:
				make clean -C $(LIBFT_PATH)
				$(RM) $(OBJS)
fclean:		clean
				make fclean -C $(LIBFT_PATH)
				$(RM) $(NAME)
re:		
				make fclean all
