NAME				= a.out
SRCS				= main.cpp
INCLUDES 			= Array.hpp	
TEMPLATES 			= Array.tpp	
OBJS				= ${SRCS:.cpp=.o}

CC					= clang++
CFLAGS				= -g3 -Wall -Wextra -Werror -Wconversion -std=c++98 -I includes

all:				${NAME}

.cpp.o:
					${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${OBJS}:			${INCLUDES} ${TEMPLATES}

${NAME}:			${OBJS}
					${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
					rm -rf ${OBJS}

fclean:				clean
					rm -rf ${NAME}

re:					fclean all

.PHONY:				all clean fclean re