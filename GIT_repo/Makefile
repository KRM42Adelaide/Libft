# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 14:15:16 by kmachaka          #+#    #+#              #
#    Updated: 2022/07/18 14:51:59 by kmachaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
CFILES = ft_isalnum.c \
		 ft_isalpha.c \
		 ft_isascii.c \
		 ft_isdigit.c \
		 ft_isprint.c \
		 ft_strlen.c \
		 ft_memset.c \
		 ft_bzero.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_calloc.c \
		 ft_strlcpy.c \
		 ft_strdup.c \
		 ft_strlcat.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strncmp.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strnstr.c \
		 ft_atoi.c \
		 ft_substr.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 ft_split.c \
		 ft_itoa.c \
		 ft_strmapi.c \
		 ft_striteri.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c

#bonus files
CBFILES = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c

OFILES = $(CFILES:.c=.o)

OBFILES = $(CBFILES:.c=.o)

all: $(NAME)

bonus: $(NAME)
		${CC} ${CFLAGS} -c $(CBFILES)
		ar rcs $^ $(OBFILES)

$(NAME): $(OFILES)
		ar rcs $@ $^

clean:
		-rm -f $(OFILES)

fclean: clean
		-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
