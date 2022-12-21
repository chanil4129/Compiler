CC=cc

PROG=interp
PL=lex.yy.c
PY=y.tab.c

allk : $(PROG) $(PL) $(PY)

$(PROG) : y.tab.c lex.yy.c interp.c lib.c
	$(CC) -o $@ y.tab.c lex.yy.c interp.c lib.c

$(PL) : interp.l
	lex interp.l

$(PY) : interp.y
	yacc -d interp.y

clean : 
	rm -rf $(PROG)
	rm -rf $(PL)
	rm -rf $(PY)