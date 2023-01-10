# on defini une variable avec un '='<nom de la variable><:>
SRCS	+= ft_isalnum.c 
SRCS	+= ft_isalpha.c
SRCS	+= ft_isascii.c
SRCS	+= ft_isdigit.c
SRCS	+= ft_isprint.c
SRCS	+= ft_memset.c 
SRCS	+= ft_strlen.c
SRCS	+= ft_bzero.c 
SRCS	+= ft_islower.c
SRCS	+= ft_memmove.c
SRCS	+= ft_memcpy.c 
SRCS	+= ft_strchr.c 
SRCS	+= ft_tolower.c
SRCS	+= ft_toupper.c 
SRCS	+= ft_strncat.c  
SRCS	+= ft_strlcat.c
SRCS	+= ft_strrchr.c 
SRCS	+= ft_strncmp.c
SRCS	+= ft_memchr.c
SRCS	+= ft_memcmp.c
SRCS	+= ft_strnstr.c
SRCS	+= ft_atoi.c
SRCS	+= ft_calloc.c
SRCS	+= ft_strdup.c
SRCS	+= ft_substr.c 
SRCS	+= ft_strjoin.c
SRCS	+= ft_strtrim.c
SRCS	+= ft_strlcpy.c
SRCS	+= ft_itoa.c
SRCS	+= ft_split.c
SRCS	+= ft_putchar_fd.c
SRCS	+= ft_putstr_fd.c
SRCS	+= ft_putnbr_fd.c
SRCS	+= ft_putendl_fd.c
SRCS	+= ft_strmapi.c
SRCS	+= ft_striteri.c

       
SRCS_BONUS	+= ft_lstnew.c 
SRCS_BONUS	+= ft_lstadd_front.c
SRCS_BONUS	+= ft_lstsize.c
SRCS_BONUS	+= ft_lstlast.c
SRCS_BONUS	+= ft_lstadd_back.c
SRCS_BONUS	+= ft_lstdelone.c
SRCS_BONUS	+= ft_lstclear.c
SRCS_BONUS	+= ft_lstiter.c
SRCS_BONUS	+= ft_lstmap.c
 
OBJS	= ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}


NAME	= libft.a 

CFLAGS	= -Wall -Wextra -Werror

CC		=  gcc

RM		= rm -f

#on defini les regles avec ':' <nom de la regle><:>

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

#${NAME_BONUS}:	${OBJS} ${OBJS_BONUS}
#				ar rcs ${NAME} ${OBJS_BONUS} ${NAME}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)


bonus:	${OBJS_BONUS}
		ar rcs ${NAME} ${OBJS_BONUS} ${NAME} 

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
#.PHONY = mots cles qui sert a dir qui il a des regle qui ne sont pas a interpreter
#et faire que si on a une comande qui a le meme 
#nom que notre regle,qu'elle' soit utiliser et pas mis de coter 
.PHONY:		all clean fclean re bonus

