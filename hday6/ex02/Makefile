# NAME ===========================================
NAME =		truetype
# ================================================

# FILES ==========================================
FILES =		main.cpp	\
			A.cpp		\
			B.cpp		\
			C.cpp		\
# ================================================

# HEADER =========================================
HEADER =	A.hpp		\
			B.hpp		\
			C.hpp		\
			Base.hpp	\
# ================================================

# FLAGS ==========================================
FLAGS =		-Wall -Wextra -Werror -std=c++98
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

$(OBJS_DIR)/%.o:	%.cpp Makefile $(HEADER) | $(OBJS_DIR)
					${CC} ${FLAGS} -c $< -o $@

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
