NAME = Unnecessary_violence

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# SRC = $(shell find . -name \*.cpp)
SRC = main.cpp \
		HumanA.cpp \
		Weapon.cpp \
		HumanB.cpp \

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all 
