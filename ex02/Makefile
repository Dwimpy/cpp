NAME	:= Accounts

CC		:= c++
RM		:= rm
FLAGS	:= -std=c++98 #-Wall -Werror -Wextra

INCLUDE := ./include
SRC_DIR	:= ./src
OBJ_DIR	:= ./obj
MAINFILE := tests.cpp

HEADERS := -I $(INCLUDE)

SRC 	:= Account.cpp 

SRCS	:= $(patsubst %.cpp, $(SRC_DIR)/%.cpp, $(SRC))
OBJS	:= $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))


all: $(NAME)

$(NAME):	$(OBJS) $(MAINFILE)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) $(MAINFILE) -o $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(HEADERS)  -c $< -o $@ $(FLAGS)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -rdf $(OBJ_DIR)

fclean:	clean
	@$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
