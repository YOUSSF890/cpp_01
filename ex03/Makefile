NAME = Weapon
CC = c++
FLAG = -Werror -Wextra -Wall -std=c++98
SRC =main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:%.cpp=%.o)
HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

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