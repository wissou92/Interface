SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
DIR=../



lib: affichelib.a
	@mv $(LIB) $(DIR)



%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)



affichelib.a: $(OBJ)
	@ar rcs $(LIB) $^ 
	@ranlib $(LIB)
	

