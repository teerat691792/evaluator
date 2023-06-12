NAME := templates

SRCS := $(wildcard *.cpp)
BUILD_DIR := ./objs
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

CXX := c++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

$(BUILD_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
