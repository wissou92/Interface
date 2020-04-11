export CC=gcc
export CFLAGS=-W -Wall --pedantic
export EXEC=exec
export LDFLAGS=-lm -L. -l$(LIB)
export LIB=librairie.a
EXEC_DIR = ../$(EXEC)


SRC=src



compile: main.o lib 
	@$(CC) -o $(EXEC_DIR) main.o #$(LDFLAGS)


main.o: main.c
	@$(CC) -o $@ -c main.c $(CFLAGS)


lib:
	@(cd $(SRC) && $(MAKE))


clean:
	@rm -rf $(LIB) 
	@rm -rf main.o
	@(cd $(SRC) && rm -rf *.o)


mrproper: clean
	@rm -rf $(EXEC_DIR)



