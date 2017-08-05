a.out: lex.yy.c y.tab.c main.o
	gcc lex.yy.c y.tab.c main.o -lfl

lex.yy.c: ass3_14CS30017.l
	flex ass3_14CS30017.l

y.tab.c: ass3_14CS30017.y
	yacc -dtv ass3_14CS30017.y

main.o: main.c
	gcc -c main.c

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output main_file.o
