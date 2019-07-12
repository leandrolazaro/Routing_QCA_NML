# change application name here (executable output name)
TARGET=router

# compiler
CC=sudo g++
CCO=clang
# warnings
WARN=-Wall


CCFLAGS=$(WARN)

SRC= main.cpp grafo/vetorAdjacency.cpp grafo/itemVetorAdjacency.cpp grafo/listAdjacency.cpp

all:
	$(CC) -o $(TARGET) $(SRC) $(CCFLAGS)

run:
	./$(TARGET)

clear:
	rm $(TARGET)

clang:
	$(CCO) -o $(TARGET) $(SRC) $(CCFLAGS) -lm -O3