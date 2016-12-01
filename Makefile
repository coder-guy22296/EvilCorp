# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gli <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/17 18:33:25 by gli               #+#    #+#              #
#    Updated: 2016/11/30 14:48:00 by gli              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
FILENAMES = page1.c draw_box.c key_hook.c patient_page.c doctor_list_page.c\
			pharm_list_page.c ava_time_page.c textbox.c pharmacist_page.c \
			authentication.c draw_logo.c


LIBFT = libft/libft.a
CC = gcc -Wall -Werror -Wextra
FLAGS = -L minilibx_macos/ -lmlx -framework OpenGL -framework AppKit -I minilibx_macos/
FLAGS += -I./ 
SOURCES = $(addprefix srcs/, $(FILENAMES))

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf test
fclean: clean

re: fclean all

$(NAME):
	$(CC) $(SOURCES) $(LIBFT) $(FLAGS) -o $(NAME)

