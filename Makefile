CC        = g++
DEBUG     = -g
CFLAGS    = -v -c -Wall $(DEBUG)
LFLAGS    = -v -Wall $(DEBUG)

BIN_DIR   = bin
BUILD_DIR = build
INC_DIR   = include
SRC_DIR   = src

vpath %.c   $(SRC_DIR)
vpath %.cpp $(SRC_DIR)
vpath %.h   $(INC_DIR)
vpath %.hpp $(INC_DIR)
vpath %.o   $(BUILD_DIR)

TARGET = $(BIN_DIR)/dependency-injection-example
OBJS   = dep.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $^ -o $@

$(BUILD_DIR)/main.o: main.cpp
	$(CC) $(CFLAGS) $< -o $@

$(BUILD_DIR)/dep.o: dep.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(info ******** cleaning ./bin* and ./build/* ********)
	@rm -rf ./bin/* ./build/*

