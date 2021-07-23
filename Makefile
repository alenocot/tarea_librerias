CC = gcc -Wall -c -I include/

all: bin/estatico bin/dinamico

bin/estatico: obj/main.o lib/libconv.a 
	gcc $^ -o $@

lib/libconv.a: obj/dias.o obj/formato.o  obj/segundos.o
	ar -rcs lib/libconv.a obj/dias.o obj/formato.o  obj/segundos.o

obj/main.o: src/main.c
	$(CC) $< -o $@

obj/dias.o: src/dias.c
	$(CC) $< -o $@

obj/formato.o: src/formato.c
	$(CC) $< -o $@

obj/segundos.o: src/segundos.c
	$(CC) $< -o $@

bin/dinamico: lib/libconv.so obj/main.o 
	gcc obj/main.o -lconv -L lib/ -o bin/dinamico

lib/libconv.so: obj/segundos_s.o obj/dias_s.o obj/formato_s.o
	gcc -shared $^ -o $@

obj/segundos_s.o: src/segundos.c
	$(CC) $< -fPIC -o $@

obj/dias_s.o: src/dias.c
	$(CC) $< -fPIC -o $@

obj/formato_s.o: src/formato.c
	$(CC) $< -fPIC -o $@
	
.PHONY: clean
clean: 
	mkdir -p bin/ obj/
	rm -f obj/* bin/*
