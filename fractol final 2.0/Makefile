
NAME				=	fractol

CC					=	gcc
CFLAGS				=	-Wall -Werror -Wextra
RM					=	rm -f

LIBS 				= 	-Lminilibx -lmlx -framework OpenGL -framework AppKit -lm
MLX 				= 	./minilibx/libmlx.a
INC 				= 	inc/ libft/ minilibx/
LIBFT				= 	./libft/libft.a
SRC_DIR				= 	source/
OBJ_DIR				=	obj/

SRC					=	fractol.c \
						init.c \
						render.c \
						events.c \
						fractol_utils.c \
						fractol_utils2.c \
						colours.c

SRCS				=	$(addprefix $(SRC_DIR), $(SRC))

OBJ 				= 	$(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all: 					$(MLX) $(LIBFT) $(NAME)

$(NAME): 				$(OBJ) $(MLX) $(LIBFT)
						@$(CC) $(CFLAGS) $(OBJ) $(MLX) $(LIBFT) $(LIBS) -o $(NAME)

$(LIBFT):
						@make -sC ./libft

$(MLX):
						@make -sC ./minilibx

$(OBJ_DIR)%.o:			$(SRC_DIR)%.c 
						@mkdir -p $(@D)
						@$(CC) $(CFLAGS) -c $< -o $@

clean:
						@$(RM) -r $(OBJ_DIR)
						@make clean -C ./minilibx
						@make clean -C ./libft

fclean: 				clean
						@$(RM) $(NAME)
						@$(RM) $(MLX)
						@$(RM) $(LIBFT)

re: 					fclean all

.PHONY: 				all clean fclean re