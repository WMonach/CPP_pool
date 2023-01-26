# NAME ===========================================
NAME =		I_did_too_much
# ================================================

# FILES ==========================================
FILES =		main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp	\
# ================================================

# HEADER =========================================
HEADER =	Weapon.hpp	\
			HumanA.hpp	\
			HumanB.hpp	\

# ================================================

# FLAGS ==========================================
FLAGS =		-Wall -Wextra -Werror
# ================================================

# COMPIL =========================================
CC =		c++
# ================================================

# OBJS_DIR =======================================
OBJS_DIR =	.objs
# ================================================

# OBJ ============================================
OBJ = $(addprefix $(OBJS_DIR)/, $(FILES:.cpp=.o))
# ================================================

all:				$(NAME)

$(NAME):			$(OBJ)
					$(CC) $(OBJ) -o $(NAME)

$(OBJS_DIR)/%.o:	%.cpp Makefile | $(OBJS_DIR)
					${CC} ${CFLAGS} -c $< -o $@

$(OBJS_DIR):
					mkdir $(OBJS_DIR)

clean :
					rm -f ${OBJ} ${OBJ_B} $(OBJS_DIR)/*.o 

fclean :
					rm -f ${OBJ} ${OBJ_B} $(OBJS_DIR)/*.o
					rm -f ${NAME}
					rm -rf $(OBJS_DIR)

re :				fclean all

.PHONY:				all clean fclean re

# NAME =		megaphone

# CFLAGS =	-Wall -Wextra -Werror

# CC =		c++

# CRASH = -fsanitize=address -g3

# DIR_OBJ =	.object

# SUB_DIR_LST =.

# MD := mkdir -p

# DIR_SRC := src#.

# FILE_EXT := .cpp

# OBJ			=		$(addprefix $(DIR_OBJ)/, $(addsuffix .o,$(INC_FILES)))

# SUB_DIR=			$(addprefix $(DIR_OBJ)/,$(SUB_DIR_LST))

# INC_FILES	=		megaphone	\

# all: 				$(NAME)


# $(NAME):			$(OBJ)
# 					$(CC) $(OBJ) -o $(NAME)
	
# $(DIR_OBJ)/%.o:		$(DIR_SRC)/%$(FILE_EXT) Makefile | $(SUB_DIR)
# 					${CC} ${CFLAGS} -c $< -o $@

# $(SUB_DIR) :
# 					$(MD) $@


# norme :
# 					norminette

# clean :
# 					rm -f ${OBJ} ${OBJ_B} $(OBJS_DIR)/*.o 
# 					rm -rf $(OBJS_DIR)

# fclean :
# 					rm -f ${OBJ} ${OBJ_B} $(OBJS_DIR)/*.o
# 					rm -f ${NAME}
# 					rm -rf $(OBJS_DIR)

# re :				fclean all

# .PHONY:				all clean fclean libs re objs obj bonus