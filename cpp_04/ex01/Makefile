SRCS =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

SRCS_OBJ = $(SRCS:.cpp=.o)

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

NAME = a.out

all : ${NAME}

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} 

${NAME} : ${SRCS_OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS_OBJ}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
