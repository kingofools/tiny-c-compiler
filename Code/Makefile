tinyc: lex.yy.c y.tab.c y.tab.h ass6_14CS30017_translator.h ass6_14CS30017_translator.cxx libmyl.a
	g++ lex.yy.c y.tab.c ass6_14CS30017_translator.cxx -lfl -o tinyc
	# Use "make run" to make executables for all 5 test files

y.tab.h: ass6_14CS30017.y
	yacc -dtv ass6_14CS30017.y 
y.tab.c: ass6_14CS30017.y
	yacc -dtv ass6_14CS30017.y 
lex.yy.c: ass6_14CS30017.l y.tab.h
	flex ass6_14CS30017.l

libmyl.a: myl.o
	ar -rcs libmyl.a myl.o

myl.o: myl.c myl.h
	gcc -Wall -m32 -c myl.c

clean:  
	rm tinyc y.tab.h y.tab.c lex.yy.c y.output test0 test1 test2 test3 test4 test0.s test1.s test2.s test3.s test4.s myl.o libmyl.a
run:	
	# generating code for running the test files 
	./tinyc < ass6_14CS30017_test0.c > ass6_14CS30017_test0.asm
	./tinyc < ass6_14CS30017_test1.c > ass6_14CS30017_test1.asm
	./tinyc < ass6_14CS30017_test2.c > ass6_14CS30017_test2.asm
	./tinyc < ass6_14CS30017_test3.c > ass6_14CS30017_test3.asm
	./tinyc < ass6_14CS30017_test4.c > ass6_14CS30017_test4.asm

