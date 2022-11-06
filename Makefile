# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 05:00:19 by tpoungla          #+#    #+#              #
#    Updated: 2022/07/23 09:08:15 by tpoungla         ###   ########.fr        #
#    Updated: 2022/07/23 07:40:21 by tpoungla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strtrim.c ft_strjoin.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strlcat.c ft_strlcpy.c ft_itoa.c ft_strdup.c ft_substr.c ft_striteri.c ft_strmapi.c ft_memset.c ft_bzero.c ft_calloc.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_split.c
OBJS = $(SRCS:.c=.o)

SRCSB = ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_front.c
OBJSB = $(SRCSB:.c=.o)

all: $(NAME)

.c.o:
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME): $(OBJSB)
	ar rcs $(NAME) $(OBJSB)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f  $(NAME) $(bonus)

re: fclean all
