NAME = Zombie
CC = c++
FLAGE = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp newZombie.cpp randomchump.cpp Zombie.cpp
HADER = Zombie.h
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all
