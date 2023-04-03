SRC = main.c \
	  ft_strlib.c \
	  ft_strlib2.c \
	  ft_io.c \
	  argparse.c \
	  dictparse.c \
	  ft_linked_list.c \
	  ft_linked_list_helpers.c \
	  printing.c \
	  ft_convert.c \
	  ft_ntow.c \
	  ft_array.c \
	  ft_math.c \

HEADERS = ft_strlib.h \
		  ft_strlib2.h \
		  ft_io.h \
		  colors.h \
		  argparse.h \
		  dictparse.h \
		  ft_linked_list.h \
		  ft_linked_list_helpers.h \
		  printing.h \
		  ft_convert.h \
		  ft_ntow.h \
		  ft_array.h \
		  ft_math.h \

OBJDIR = obj
INCDIR = include

CC = cc
CFLAGS = \
		 -Wall \
		 -Wextra \
		 -Werror \
		 -I$(INCDIR) \
		 -fcolor-diagnostics \

LDFLAGS =

_OBJ = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJDIR)/,$(_OBJ))
DEPS = $(addprefix $(INCDIR)/,$(HEADERS))

RM = /bin/rm -f
RMDIR = /bin/rmdir

.DEFAULT_GOAL = all

NAME ?= rush-02

.PHONY: re fclean clean all

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@$(RMDIR) $(OBJDIR) 2>/dev/null || true

re: fclean all

$(NAME): $(OBJ)
	@$(CC) $(LDFLAGS) $^ -o $@

$(OBJ): | $(OBJDIR)

$(OBJDIR)/%.o: %.c $(DEPS)
	@norminette $< >/dev/null || { printf '\033[101;37m%s\033[m\n' "!Norminette Failed>>>"; norminette $<; printf '\033[101;37m%s\033[m\n' "<<<Norminette Failed!"; exit 1; }
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $@

tests: test

test: re run fclean

SUCCESS_MSG =      printf '\n\033[102;30m --- %s --- \033[m\n\n' "Test passed!"
FAIL_MSG =         printf '\n\033[101;37m --- %s --- \033[m\n\n' "Test failed!"
SUCCESS_MSG_VALG = printf '\n\033[102;30m --- %s --- \033[m\n\n' "Valgrind ran without errors!"
FAIL_MSG_VALG =    printf '\n\033[101;37m --- %s --- \033[m\n\n' "Valgrind Failed!"
SUCCESS =          && $(SUCCESS_MSG)      || $(FAIL_MSG)
SUCCESS_VALG =     && $(SUCCESS_MSG_VALG) || $(FAIL_MSG_VALG)
FAIL =             && $(FAIL_MSG)         || $(SUCCESS_MSG)
VALGRIND =         valgrind --leak-check=full --error-exitcode=1
YLW =              : [33m;
CYN =              : [36m;
CLR_RST =          && : [m

run:
	@clear
	$(YLW) ./$(NAME) "./dicts/numbers2.dict" 12345678  $(CLR_RST) $(SUCCESS)
	$(YLW) ./$(NAME) "./dicts/numbers2.dict" 123456    $(CLR_RST) $(SUCCESS)
	$(YLW) ./$(NAME) "./dicts/numbers2.dict" 0         $(CLR_RST) $(SUCCESS)
	$(YLW) ./$(NAME)                                   $(CLR_RST) $(SUCCESS)
	$(YLW) ./$(NAME) 1                                 $(CLR_RST) $(SUCCESS)
	$(YLW) ./$(NAME) "./dicts/numbers2.dict" 1         $(CLR_RST) $(SUCCESS)
	$(YLW) ./$(NAME) 1 "./dicts/numbers2.dict"         $(CLR_RST) $(FAIL)
	$(YLW) ./$(NAME) 1 "./dicts/numb.dict"             $(CLR_RST) $(FAIL)
	$(YLW) ./$(NAME) 1 2 3                             $(CLR_RST) $(FAIL)

valgrind: re
	$(CYN) $(VALGRIND) ./$(NAME) 1                         $(CLR_RST) $(SUCCESS_VALG)
	$(CYN) $(VALGRIND) ./$(NAME) "./dicts/numbers2.dict" 1 $(CLR_RST) $(SUCCESS_VALG)
