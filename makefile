#Mon premier Makefile

CC = gcc
CFLAGS = -Wall 
LIB =
EXEC = pendu

#Tous les fichiers .c
SRC = $(wildcard *.c)

#Générer les noms des fichiers .o à partir de la liste des fichiers .c
OBJ = $(SRC:.c=.o)


all: $(EXEC)


$(EXEC) : $(OBJ) 
	$(CC) -o $@  $^ $(CFLAGS)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo "Suppression des fichiers $(OBJ)"
	rm  $(OBJ)

mrproper: clean
	rm $(EXEC)



rebuild: mrproper all




