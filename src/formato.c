#include<stdio.h>
#include<string.h>
#include<utilfecha.h>
#include <stdlib.h>
void convertirFecha(char *cadena){
char dias[NUM_MESES][200] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

int buf[4] = {0};
const char delim[2] = "-";
char *token;
token = strtok(cadena, delim);

int i = 0;
while(token != NULL) {
	buf[i] = atoi(token);
	token = strtok(NULL, delim);
	i++;
}

if(i == 1 || buf[1] > 12 || buf[2] > 31 || (buf[1] == 2 && buf[2] > 29))
	printf("Fecha incorrecta.\nFormato: (año-mes-dia)\n");
else
	printf("%d de %s de %d\n", buf[2],dias[buf[1]-1],buf[0]);
 

}

