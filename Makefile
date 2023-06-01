SRC	=	main.c \
		init.c \
		move_player.c \
		cast_rays.c \
		render_3d_one_wall.c \
		display_3d_walls.c \
		display_2d_map.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_raycaster

CSFML_FLAGS	=	-lcsfml-graphics -lcsfml-system -lcsfml-window

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME) $(CSFML_FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
