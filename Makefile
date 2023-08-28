CC = g++
OPT = -O3
output: lexer.cc parser.cc
	$(CC) $(OPT) $^ HandleExpressionFormat.cc HandleFiles.cc  untyped.cc SymbolTable.cc  -o $@

lexer.hh lexer.cc: lexer.l
	flex --header-file=lexer.hh -o lexer.cc lexer.l 

parser.hh parser.cc: parser.y
	bison -d -o parser.cc parser.y
