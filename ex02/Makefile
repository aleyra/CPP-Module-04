.PHONY: all clean fclean re
# Name of file
NAME		=	animals

# Name directory
PATH_OBJ	=	objs

#List of sources
SRCS		=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS		=	$(addprefix $(PATH_OBJ)/, $(SRCS:.cpp=.o))
INCS		=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

# Commands of compilation
COMP		=	c++
COMP_FLAG	=	-Wall -Werror -Wextra

# Others Command
RM			=	/bin/rm

# Color Code and template code
_YELLOW		=	\033[38;5;184m
_GREEN		=	\033[38;5;46m
_RESET		=	\033[0m
_INFO		=	[$(_YELLOW)INFO$(_RESET)]
_SUCCESS	=	[$(_GREEN)SUCCESS$(_RESET)]

# Functions
all:	init $(NAME)
		@ echo "$(_SUCCESS) Compilation done"

init:
		$(shell mkdir -p $(PATH_OBJ))

bonus : all

$(NAME):	$(OBJS)
				$(COMP) $(COMP_FLAG) $(OBJS) -o $(NAME)

$(PATH_OBJ)/%.o : %.cpp  $(INCS)
		@ $(COMP) $(COMP_FLAG) -c $< -o $@
		@ echo "$(_INFO) Compilation of $*"

clean:
		@ $(RM) -rf $(PATH_OBJ)
		echo "$(_INFO) Deleted files and directory"

fclean: clean
		@ $(RM) -rf $(NAME)

re: fclean all
