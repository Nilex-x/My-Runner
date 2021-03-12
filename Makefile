##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for my_runner
##

SRC			=		src/my_runner.c \
					src/display.c \
					src/load_menu.c \
					src/load_window.c \
					src/manage_user.c \
					src/sort_button.c \
					src/load_paralax.c \
					src/load_pause.c \
					src/anim_paralax.c \
					src/load_player_select.c \
					src/load_select.c \
					src/sort_button_select.c \
					src/anim_player_select.c \
					src/run_player.c \
					src/load_player_game.c \
					src/create_sound.c \
					src/jump_player.c \
					src/open_and_verify_files.c \
					src/any_function_of_kunai.c\
					src/lauch_obstacle.c \
					src/sort_player.c \
					src/sort_player_init_rect.c \
					src/verif_player_lose.c \
					src/load_end.c

LIB_PATH	=		lib

NAME_LIB	=		libmy.a

PATH_MAKE	=		lib

BIN_NAME	=		my_runner

PATH_INCLUDE	=	include

FLAGS_CSFML		=	-l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window

all: compil_lib create_bin

compil_lib:
	@make -C $(PATH_MAKE)

create_bin:
	@gcc -o $(BIN_NAME) $(SRC) -L$(LIB_PATH) -I$(PATH_INCLUDE) -lmy $(FLAGS_CSFML) -g3
	@echo "binary create"

clean:
	@make clean -C $(PATH_MAKE)

fclean:
	@make fclean -C $(PATH_MAKE)
	@rm $(BIN_NAME)
	@echo "binary remove"

re: fclean all