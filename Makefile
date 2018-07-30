INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
BIN_DIR = bin

CC = g++
CFLAGS =  -Wall -std=c++11 -I$(INC_DIR)
ARCHIVE = ar

linux: jogolib.so jogo

jogolib.so:  $(SRC_DIR)/player.cpp
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/player.cpp -o $(OBJ_DIR)/player.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/player.o
	@echo "+++[Biblioteca dinamica criada em $(LIB_DIR)/$@]+++"

jogo:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/jogolib.so -o $(BIN_DIR)/$@
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/player.o

clean:
	@echo "Removendo arquivos objeto e binarios"
	@rm -rf $(OBJ_DIR)/*