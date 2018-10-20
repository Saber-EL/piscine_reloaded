# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zchatoua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 19:12:51 by zchatoua          #+#    #+#              #
#    Updated: 2018/10/03 19:19:12 by zchatoua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER	=	includes/

SOURCE	=	srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strlen.c \
			srcs/ft_swap.c

CFLAG	= 	-Wall -Wextra -Werror

TARGET	=	libft.a

OBJ		=	ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o

all: $(TARGET)

object:
		gcc $(CFLAG) -c $(SOURCE) -I $(HEADER)

$(TARGET): object
		ar rc  $(TARGET) $(OBJ)	

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(TARGET)

re: fclean all
