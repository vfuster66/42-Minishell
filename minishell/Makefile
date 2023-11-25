# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LDFLAGS = -lreadline -lncurses -lm

# Nom du programme
NAME = minishell

# Bibliothèques
LIB_PATH = ./libft
LIB_NAME = libft.a
LIB_INC = -I$(LIB_PATH)
LIB_LINK = -L$(LIB_PATH) -lft

# Sources
SRCS := $(wildcard sources/*.c)

# Dossier pour les fichiers objets
OBJ_DIR = objects

# Chemin complet pour les fichiers objets
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

# Règle générique pour la création des fichiers objets
$(OBJ_DIR)/%.o: %.c
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) $(LIB_INC) -c $< -o $@

all: compile

compile: $(OBJS)
				@if ! [ -f $(NAME) ] || [ "$(OBJS)" -nt "$(NAME)" ]; then \
					make -s -C $(LIB_PATH); \
					$(CC) $(CFLAGS) $(OBJS) $(LIB_INC) $(LIB_LINK) $(LDFLAGS) -o $(NAME); \
					echo "✅ Minishell compiled\n"; \
				else \
					echo "✅ All is up-to-date"; \
				fi

clean:
				@$(RM) -r $(OBJ_DIR)
				@make -s -C $(LIB_PATH) clean
				@echo "✅ Libft Cleaned\n"

fclean: clean
				@$(RM) $(NAME)
				@make -s -C $(LIB_PATH) fclean
				@echo "✅ Minishell Cleaned\n"

re: fclean all

.PHONY: all clean fclean re bonus
