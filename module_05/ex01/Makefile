	# Library Name #
NAME		=	IN_ROWS_LARVAE

	# Compilator #
COMPILER	=	c++

	# Variables #
SRCS		=		main.cpp \
					Bureaucrat.cpp \
					Form.cpp \

INCLUDES	=		includes/Bureaucrat.hpp \
					includes/Form.hpp \

	# Colors Foreground #
DEFAULT		=	\033[0;39m
BLACK		=	\033[0;30m
RED			=	\033[0;31m
RED_B		=	\033[1;31m
L_RED		=	\033[0;91m
GREEN		=	\033[0;32m
GREEN_B		=	\033[1;32m
L_GREEN		=	\033[0;92m
YELLOW		=	\033[0;33m
L_YELLOW	=	\033[0;93m
BLUE		=	\033[0;34m
BLUE_B		=	\033[1;34m
L_BLUE		=	\033[0;94m
PINK		=	\033[0;35m
L_PINK		=	\033[0;95m
SKY			=	\033[0;36m
SKY_B		=	\033[1;36m
L_CYAN		=	\033[0;96m
GREY		=	\033[0;37m
D_GREY		=	\033[0;90m
WHITE		=	\033[0;97m
RESET		=	\e[0m

	# Colors Background #
NOIR		=	\033[0;40m
ROUGE		=	\033[0;41m
L_ROUGE		=	\033[0;101m
VERT		=	\033[0;42m
L_VERT		=	\033[0;102m
JAUNE		=	\033[0;43m
L_JAUNE		=	\033[0;103m
BLEU		=	\033[0;44m
L_BLEU		=	\033[0;104m
ROSE		=	\033[0;45m
L_ROSE		=	\033[0;105m
CYAN		=	\033[0;46m
L_CYAN		=	\033[0;106m
GRIS		=	\033[0;100m
BLANC		=	\033[0;107m

	# Objects #
OBJS	=	${SRCS:.cpp=.o}
OBJS	:=	$(addprefix objs/,${OBJS})
DEP		=	$(OBJS:.o=.d)

	# Flags #

FLAGS		=	-g3 -Wall -Wextra -Werror -std=c++98

	# Rules #
all:		${NAME}
			@printf "$(L_PINK)<3 <3 $(RESET)"
			@printf "$(RED_B)vietdu91 le sang$(RESET)"
			@printf "$(L_PINK) <3 <3 \n$(RESET)"

$(NAME):	${OBJS} ${INCLUDES}
			${COMPILER} ${FLAGS} -I includes ${OBJS} -o $(NAME)
			@printf "\n$(GREEN)████████████████  ✨ ✨ ✨  C'EST MERVEILLEUSEMENT BIEN COMPILE  ✨ ✨ ✨  ████████████████$(RESET)"
			@printf	"	\n\n\n"
			@printf "		          $(NOIR)  $(RESET)$(JAUNE)      $(RESET)$(NOIR)  $(RESET)\n"
			@printf "		        $(NOIR)  $(RESET)$(JAUNE)          $(RESET)$(NOIR)  $(RESET)\n"
			@printf "		        $(NOIR)  $(RESET)$(JAUNE)            $(RESET)\n"
			@printf "		      $(JAUNE)      $(RESET)$(NOIR)  $(RESET)$(JAUNE)    $(RESET)$(NOIR)  $(RESET)$(JAUNE)  $(RESET)            $(GRIS)                                $(RESET)\n"
			@printf "		        $(JAUNE)              $(RESET)            $(GRIS)  $(RESET)$(BLANC)                            $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		        $(JAUNE)      $(RESET)$(ROUGE)    $(RESET)$(JAUNE)    $(RESET)            $(GRIS)  $(RESET)$(BLANC)                        $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		          $(JAUNE)          $(RESET)              $(GRIS)  $(RESET)$(BLANC)                        $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		          $(JAUNE)      $(RESET)                  $(GRIS)  $(RESET)$(BLANC)                $(RESET)$(ROUGE)  $(RESET)$(BLANC)      $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		  $(BLEU)        $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)        $(RESET)          $(GRIS)  $(RESET)$(BLANC)  $(RESET)$(CYAN)  $(RESET)$(BLANC)            $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		$(BLEU)          $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)          $(RESET)        $(GRIS)  $(RESET)$(CYAN)  $(RESET)$(BLANC)      $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		$(BLEU)  $(RESET)  $(BLEU)      $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)      $(RESET)  $(BLEU)  $(RESET)        $(RESET)$(CYAN)  $(RESET)$(BLANC)    $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		$(BLEU)  $(RESET)  $(BLEU)      $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)      $(RESET)  $(BLEU)  $(RESET)      $(RESET)$(CYAN)  $(RESET)$(GRIS)  $(RESET)$(BLANC)    $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(ROUGE)  $(RESET)$(BLANC)  $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		$(BLEU)  $(RESET)  $(BLEU)      $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)      $(RESET)  $(BLEU)      $(RESET)$(JAUNE)  $(RESET)  $(GRIS)  $(RESET)$(BLANC)                            $(RESET)$(GRIS)  $(RESET)\n"
			@printf "		$(BLEU)  $(RESET)  $(BLEU)      $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)      $(RESET)      $(CYAN)  $(RESET)    $(GRIS)                                $(RESET)\n"
			@printf "		$(BLEU)  $(RESET)  $(BLEU)      $(RESET)$(BLANC)  $(RESET)$(ROSE)  $(RESET)$(BLANC)  $(RESET)$(BLEU)      $(RESET)\n"
			@printf "		$(BLEU)  $(RESET)  $(BLEU)      $(RESET)$(BLANC)      $(RESET)$(BLEU)      $(RESET)\n"
			@printf "		$(JAUNE)  $(RESET)  $(BLEU)      $(RESET)$(NOIR)      $(RESET)$(BLEU)      $(RESET)\n"
			@printf "		    $(BLEU)      $(RESET)$(NOIR)      $(RESET)$(BLEU)      $(RESET)\n"
			@printf "		      $(NOIR)              $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		      $(NOIR)    $(RESET)      $(NOIR)    $(RESET)\n"
			@printf "		    $(NOIR)    $(RESET)          $(NOIR)    $(RESET)\n"



			@printf "\n\n$(SKY)████████████████  😊 😊 😊  PENSEE DU JOUR POUR TE FAIRE SOURIRE  😊 😊 😊  ████████████████$(RESET)"
			@printf "\n\n$(BLUE_B)If you are served a cup of coffee, don't try to find beer in it. 🍻 \n\n$(RESET)"
			@printf "$(YELLOW)============$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)La vie passe, la moulinette trepasse !\n\n$(RESET)"

-include $(DEP)

objs/%.o:	srcs/%.cpp
			@mkdir -p $(dir $@)
			@${COMPILER} -MMD -MP ${FLAGS} -I includes -o $@ -c $<

clean:
			rm -f ${OBJS}
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)============$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"
fclean:
			rm -f ${OBJS}
			rm -f ${NAME}
			rm -rf objs
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)============$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"

re:			fclean all
			@printf "$(YELLOW)\nAimer, désirer, c’est aussi souffrir, et être prêt à recommencer... \n$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"

.PHONY:	all clean fclean re
