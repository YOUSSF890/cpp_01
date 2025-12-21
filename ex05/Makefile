NAME = Harl
CC = c++
FLAG = -Werror -Wextra -Wall -std=c++98
SRC = main.cpp Harl.cpp
OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o:%.cpp Harl.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all