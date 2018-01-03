
C_FILES = \
converter/c_intmax.c \
converter/c_uintmax.c \
converter/c_unicode.c \
\
struct/formatter.c \
\
evaluator/eval_string/compute/str_compute.c \
evaluator/eval_string/compute/str_padding.c \
evaluator/eval_string/compute/str_delprec_0.c \
evaluator/eval_string/compute/str_precision.c \
evaluator/eval_string/compute/wstr_precision.c \
evaluator/eval_string/get_string.c \
evaluator/eval_string/get_wstring.c \
evaluator/eval_char/get_char.c \
evaluator/eval_char/get_wchar.c \
evaluator/eval_base/get_base.c \
evaluator/eval_base/compute/base_compute.c \
evaluator/eval_base/compute/base_zero.c \
evaluator/eval_base/compute/base_delprec_0.c \
evaluator/eval_base/compute/base_hash.c \
evaluator/eval_number/get_val.c \
evaluator/eval_number/get_uval.c \
evaluator/eval_number/get_number.c \
evaluator/eval_number/compute/number_precision.c \
evaluator/eval_number/compute/number_zero.c \
evaluator/eval_number/compute/number_space.c \
evaluator/eval_number/compute/number_plus.c \
evaluator/eval_number/compute/number_compute.c \
evaluator/eval_pointer/compute/pointer_compute.c \
evaluator/eval_pointer/get_pointer.c \
evaluator/core.c \
evaluator/evaluator.c \
evaluator/dynamic_value.c \
\
parser/extract_flags.c \
parser/extract_full.c \
parser/extract_length.c \
parser/extract_precision.c \
parser/extract_width.c \
parser/extractor.c \
\
util/ft_str_repeat.c \
util/ft_strrep_first_aft.c \
util/unicode.c \
\
debugger/print_fmt.c \
\
printf.c


PROJECT = libftprintf.a
NAME = $(PROJECT)
NAME_LIB = $(PROJECT)
CC = gcc 
CFLAGS += -g

SRC_PATH = ./src/
INC_PATH = ./includes/
LIBFT_INCLUDES_PATH = ./libft/includes/
OBJ_PATH = ./obj/
OBJ_PATHS = parser struct util debugger converter evaluator \
evaluator/eval_base evaluator/eval_char evaluator/eval_number \
evaluator/eval_pointer evaluator/eval_string evaluator/eval_string/compute \
evaluator/eval_base/compute evaluator/eval_number/compute \
evaluator/eval_pointer/compute
LIBFT_PATH = ./libft

OBJ_SUB_PATHS = $(addprefix $(OBJ_PATH),$(OBJ_PATHS))
OBJ_NAME = $(C_FILES:.c=.o)

LIBFT_BIN_NAME = ft

SRC = $(addprefix $(SRC_PATH),$(C_FILES))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_SUB_PATHS)
	$(CC) $(CFLAGS) $(INC) -I $(LIBFT_INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	@make make_libft
	make -C libft
	cp libft/libft.a ./libftprintf.a
	ar rcs libftprintf.a $(OBJ)

clean:
	@rm -rf $(OBJ_PATH)
	@make -C libft/ clean

fclean: clean
	@rm -rf $(NAME_LIB)
	@make -C libft/ fclean

re: fclean all

cquery:
	echo "$(CFLAGS) $(INC) -I $(LIBFT_INCLUDES_PATH)" | perl -pe 's/ -/\n-/g'  > .cquery

download_libft:
	@git clone https://github.com/AlexisVisco/libft/
	@cd libft && rm -rf .git

update_libft:
	@rm -rf ./libft
	@git clone https://github.com/AlexisVisco/libft/
	@cd libft && rm -rf .git

make_libft:
	make -C libft/ 

git_add:
	git add includes/*.h
	git add src/*
	git add libft/src/*
	git add libft/includes/*.h
	git add libft/Makefile
	git add Makefile
	git add readme.md
	git add auteur

.PHONY: clean fclean re download_libft update_libft make_libft


