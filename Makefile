CC = g++

OBJ = lexer.o parser.o HandleExpressionFormat.o SymbolTable.o untyped.o HandleFiles.o

TARGET = output

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^
	
%.o: %.cc %.hh
	$(CC) -c -o $@ $<
	
clean:
	rm -f $(OBJ) $(TARGET)


