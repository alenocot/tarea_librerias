#include <stdio.h>
#include <string.h>

#define TAMANO 100
int main(){
	
	
	
	char *mensaje="Carlos,Eduardo,Pedro,Juan";
	
	char buf[TAM] = {0};
	strncpy(buf, mensaje, TAM);
	
	char *resto = NULL;
	char *inicio = mensaje;
	//Strtok_r es similar a split de Python
	//La primera vez debe llamarse con el string a separar
	//Las siguientes veces con argumento NULL
	//La funcion devolvera cada uno de los string que 
	//estan entre comas
	//Cuando la funcion devuelva NULL, quiere 
	//decir que ya no hay mas elementos
	char *elem = NULL;

	//En la primera llamada, el primer argumento tiene que ser
	//un string mutable ( char buf[tamano], NO char *buf = "....")
	elem = strtok_r(buf, ",", &resto);
	printf("%s\n", elem);

	//En llamadas subsecuentes, el primer argumento debe ser null
	while((elem = strtok_r(NULL, ",", &resto)) != NULL ){
		printf("%s\n", elem);
	}
	return 0;
}
