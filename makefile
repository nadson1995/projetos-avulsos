build:
	gcc Matriz.c -o Matriz.exe
run: Matriz.exe
	./Matriz.exe <0.in
run1: 1.c
	rm -r *.exe
	gcc 1.c -o 1.exe
	./1.exe
gexe: 1.c
	gcc 1.c -o 1.exe
rexe: 1.exe
	./1.exe

