start: y.tab.o lex.yy.o ass5_14CS30017_translator.o
	g++ -g -w y.tab.o lex.yy.o ass5_14CS30017_translator.o -lfl
y.tab.c: ass5_14CS30017.y
	yacc -dtv ass5_14CS30017.y
lex.yy.c: y.tab.h ass5_14CS30017.l ass5_14CS30017_translator.h
	flex ass5_14CS30017.l
y.tab.o: y.tab.c y.tab.h
	g++ -g -c -w y.tab.c
lex.yy.o: lex.yy.c
	g++ -g -c -w lex.yy.c
ass5_14CS30017_translator.o: ass5_14CS30017_translator.cxx ass5_14CS30017_translator.h
	g++ -g -c -w ass5_14CS30017_translator.cxx
clean:
	rm y.tab.o y.output a.out y.tab.c lex.yy.c lex.yy.o y.tab.h ass5_14CS30017_translator.o
