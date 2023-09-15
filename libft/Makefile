# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnourish <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 18:47:59 by pnourish          #+#    #+#              #
#    Updated: 2023/06/02 18:51:22 by pnourish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MAIN_SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c \
	ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c \
	ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c \
	ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c \
	ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c \
	ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_striteri.c \
	ft_strlen_np.c ft_strchr_np1.c

BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

MAIN_OBJS = $(MAIN_SRCS:.c=.o)
BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror -c -o
RM = rm -f
AR = ar rcs

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(MAIN_OBJS)
	$(AR) $(NAME) $(MAIN_OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

%.o: %.c
	$(CC) $@ $<

clean:
	$(RM) $(MAIN_OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
