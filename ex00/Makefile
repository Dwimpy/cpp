NAME	:= Megaphone

SRCS 	:= Megaphone.cpp
OBJ_DIR	:= ./obj
OBJS	:= $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))
CC		:= c++
RM		:= rm
FLAGS	:= -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

$(OBJ_DIR)/%.o:	%.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@ 

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -f $(OBJS)
	@$(RM) -d $(OBJ_DIR)

fclean:	clean
	@$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
