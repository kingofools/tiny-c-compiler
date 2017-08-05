a.out: lex.yy.o y.tab.o main.o
	gcc lex.yy.o y.tab.o main.o -lfl

lex.yy.o: lex.yy.c y.tab
	gcc -c lex.yy.c

y.tab.o: y.tab
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

y.tab: ass4_14CS30017.y
	yacc -dtv ass4_14CS30017.y

lex.yy.c: ass4_14CS30017.l
	flex ass4_14CS30017.l

clean:
	rm y.tab.o y.tab.c y.tab.h a.out lex.yy.c lex.yy.o y.output main.o

run: 
	./a.out < ass4_14CS30017_test.c
