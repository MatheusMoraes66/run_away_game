CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -lcurses

SRC_DIR = src
INC_DIR = include
BUILD_DIR = build
TARGET = run_away

GAMELOGICDIR = src/game_logic
INPUTDIR = src/input_handling
RENDERINGDIR = src/rendering
UTILSDIR = src/utils

SRCS = $(shell find $(SRC_DIR) -name '*.c')
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

.PHONY: all clean

all: $(TARGET)

$(BUILD_DIR):
	@echo "Criando diretórios de build..."
	mkdir -p $(BUILD_DIR)
	mkdir -p $(BUILD_DIR)/game_logic
	mkdir -p $(BUILD_DIR)/input_handling
	mkdir -p $(BUILD_DIR)/rendering
	mkdir -p $(BUILD_DIR)/utils

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	@echo "Compilando $<...$@ "
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(TARGET): $(OBJS)
	@echo "Linkando objetos para criar $@..."
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	@echo "Limpando arquivos de build..."
	rm -rf $(BUILD_DIR) $(TARGET)
