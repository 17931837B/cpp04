C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INFILES = 	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJFILES = $(INFILES:.cpp=.o)

NAME = I_dont_want_to_set_the_world_on_fire

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re