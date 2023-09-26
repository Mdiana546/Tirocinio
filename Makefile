CC = g++

OBJ = parser.o lexer.o HandleExpressionFormat.o SymbolTable.o untyped.o HandleFiles.o

TARGET = output

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

parser.o: parser.y
	bison -d -o parser.cc parser.y
	$(CC) -c -o $@ parser.cc

lexer.o: lexer.l
	flex --header-file=lexer.hh -o lexer.cc lexer.l 
	$(CC) -c -o lexer.o lexer.cc

%.o: %.cc %.hh
	$(CC) -c -o $@ $<
	
clean:		
	rm -f $(OBJ) $(TARGET)


