CC=cc

PROG=syntax_analysis
PL=lex.yy.c
PY=y.tab.c

allk : $(PROG) $(PL) $(PY)

$(PROG) : y.tab.c lex.yy.c main.c print.c
	$(CC) y.tab.c lex.yy.c main.c print.c

$(PL) : lex.l
	lex lex.l

$(PY) : parse.y
	yacc -d parse.y

clean : 
	rm -rf $(PROG)
	rm -rf $(PL)
	rm -rf $(PY)