CC=cc

PROG=Compiler
PL=lex.yy.c
PY=y.tab.c

allk : $(PROG) $(PL) $(PY)

$(PROG) : y.tab.c lex.yy.c main.c print.c print_semantic.c semantic.c code_generator.c
	$(CC) -o $@ y.tab.c lex.yy.c main.c print.c print_semantic.c semantic.c code_generator.c

$(PL) : lex.l
	lex lex.l

$(PY) : parse.y
	yacc -d parse.y

clean : 
	rm -rf $(PROG)
	rm -rf $(PL)
	rm -rf $(PY)